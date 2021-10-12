// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int total_width = 20;

void dashedline(){
	std::cout << std::setw(total_width) << std::setfill('-') << "-" << std::endl;
	std::cout << std::setfill(' ');
}

int main() {
    std::ifstream in_file;
	in_file.open("../responses.txt");
	if(!in_file)
		std::cerr << "Error Opening File" << std::endl;
	
	
	int name_width = 10;
	int score_width = 10;
	
	dashedline();
	
	std::cout << std::setw(name_width) << std::left << "Student"
				<< std::setw(score_width) << std::right << "Score" << std::endl;
	
    dashedline();
	
	std::string line {};
	std::string key {};
	int line_number = 0;
	std::getline(in_file,key);
	int total_score = 0;
	
	while(std::getline(in_file,line)){
		
		if (line_number%2 == 0){
			std::cout << std::setw(name_width) << std::left << line;
			line_number+=1;
		} else {
			int score = 0;
			for (int i=0; i<line.length(); i++){
				if (key[i] == line[i])
					score+=1;
			}
			std::cout << std::setw(score_width) << std::right << score << endl;
			total_score+=score;
			line_number+=1;
		}
	}
	
	dashedline();
	
	std::cout << std::setw(name_width) << std::left << "Average"
				<< std::setw(score_width) << std::right << std::setprecision(2) << (total_score/(line_number/2)) << endl;
	
	dashedline();
	
	in_file.close();
    
    return 0;
}

