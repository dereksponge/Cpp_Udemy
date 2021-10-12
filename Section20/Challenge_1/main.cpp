// Section 20
// Challenge 1clTabCtrl
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>

bool is_palindrome(const std::string& s)
{
	std::deque<char> reverse;
	std::deque<char> forward;
	
	for (char c : s){
		if (std::isalpha(c))
			forward.push_back(toupper(c));
	}
	
	
	std::copy(forward.begin(), forward.end(), std::front_inserter(reverse));
	if (reverse == forward){
		return true;
	}
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    return false;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}