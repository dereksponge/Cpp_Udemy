// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>

int main() {
    
	std::ifstream in_file {"../romeoandjuliet"};
	std::ofstream out_file {"../romeoandjuliet_linenumbers.txt"};
	
	if(!in_file) {
		std::cerr << "Error opening file" << std::endl;
		return 1;
	}
	
	if(!out_file) {
		std::cerr << "Error opening output file" << std::endl;
		return 1;
	}
	
	size_t line_number {0};
	std::string line{};
	while(std::getline(in_file,line)){
		if(line!=""){
			out_file << line_number << "\t" << line << std::endl;
			line_number++;			
		} else {
			out_file << line << std::endl;
		}
	}
	
	std::cout << "file created with line numbers" << std::endl;
	in_file.close();
	out_file.close();
	
    return 0;
}

