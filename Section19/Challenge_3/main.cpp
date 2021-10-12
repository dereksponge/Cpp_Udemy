// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main() {
    
	std::ifstream in_file;
	std::string current_word{};
	std::string word {};
	int substring_count {0};
	int word_count {0};
	in_file.open("../romeoandjuliet.txt");
	
	if(!in_file)
		std::cerr << "Error opening file" << std::endl;
	
	std::cout << "Enter a substring to find:" << std::endl;
	cin >> word;
	
	while (in_file >> current_word){
		++word_count;
		std::size_t found = current_word.find(word);
		if(found!= std::string::npos)
			substring_count++;
	}
		

	
	std::cout << word_count << "words were counted" << std::endl;
	std::cout << word << " Appears " << substring_count << " times" << std::endl;
	
	in_file.close();
	
	
    
    cout << endl;
    return 0;
}

