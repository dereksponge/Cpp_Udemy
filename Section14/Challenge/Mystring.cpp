#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

Mystring operator-(const Mystring &obj){
	size_t string_size = std::strlen(obj.str)+1;
	char *buff = new char[string_size];
	buff = strcpy(buff,obj.str);
	for (size_t i {0}; i < string_size; i++){
		buff[i] = std::tolower(buff[i]);
	}
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

bool operator==(const Mystring &lhs, const Mystring &rhs){
	if (*lhs.str == *rhs.str){
		return true;
	}
	return false;
}

bool operator!=(const Mystring &lhs, const Mystring &rhs){
	if (*lhs.str != *rhs.str){
		return true;
	}
	return false;
}

bool operator<(const Mystring &lhs, const Mystring &rhs){
	if (*lhs.str < *rhs.str){
		return true;
	}
	return false;
}

bool operator>(const Mystring &lhs, const Mystring &rhs){
	if (*lhs.str > *rhs.str){
		return true;
	}
	return false;
}

Mystring operator+(const Mystring &lhs, const Mystring &rhs){
	size_t string_size = std::strlen(lhs.str)+std::strlen(rhs.str)+1;
	char *buff = new char[string_size];
	buff = strcpy(buff, lhs.str);
	buff = std::strcat(buff, rhs.str);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
	lhs = lhs + rhs;
	return lhs;
}

Mystring operator*(const Mystring &lhs, const size_t rhs){
	size_t string_size = (std::strlen(lhs.str)*rhs)+1;
	char *buff = new char[string_size];
	buff = strcpy(buff,lhs.str);
	for (size_t i {0}; i < rhs-1; i++){
		buff = std::strcat(buff,lhs.str);
	}
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring &operator*=(Mystring &lhs, const size_t rhs){
	lhs = lhs * rhs;
	return lhs;
}

/*
Mystring Mystring::operator-()const{
	char *buff = new char[std::strlen(str)+1];
	buff = strcpy(buff,str);
	for (size_t i {0}; i < std::strlen(buff); i++){
		buff[i] = std::tolower(buff[i]);
	}
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

bool Mystring::operator==(const Mystring &rhs){
	if (std::strcmp(str, rhs.str)==0)
		return true;
	return false;
		
}

bool Mystring::operator!=(const Mystring &rhs){
	if (std::strcmp(str, rhs.str)!=0)
		return true;
	return false;
		
}

bool Mystring::operator<(const Mystring &rhs){
	if (std::strcmp(str, rhs.str)<0)
		return true;
	return false;
		
}

bool Mystring::operator>(const Mystring &rhs){
	if (std::strcmp(str, rhs.str)>0)
		return true;
	return false;
		
}

Mystring Mystring::operator+(const Mystring &rhs) const {
	char *buff = new char[(std::strlen(str)+std::strlen(rhs.str))+1];
	buff = std::strcpy(buff,str);
	buff = std::strcat(buff,rhs.str);
	Mystring temp {buff};
	delete [] buff;
	return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs) {
	*this = *this + rhs;
	return *this;
}


Mystring &Mystring::operator*=(const size_t rhs) {
	Mystring *buff = new Mystring {*this};
	for (size_t i {0}; i < rhs-1; i++){
		*this = *this + *buff;
	} 
	
	return *this;
}

Mystring Mystring::operator*(const size_t rhs) const {
	char *buff = new char[(std::strlen(str)*rhs)+1];
	buff = std::strcpy(buff,str);
	for ( size_t i {0}; i < rhs-1; i++){
		buff = std::strcat(buff,str);
	}
	Mystring temp {buff};
	delete [] buff;
	return temp;
}
*/

