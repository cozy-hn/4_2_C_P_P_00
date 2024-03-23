#include <iostream>

using std::cout;
using std::string;

int main(void)
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "The memory address of the string variable: " << &str << "\n";
	cout << "The memory address held by stringPTR: " << stringPTR << "\n";
	cout << "The memory address held by stringREF: " << &stringREF << "\n";
	cout << "String: " << str << "\n";
	cout << "StringPTR: " << *stringPTR << "\n";
	cout << "StringREF: " << stringREF << "\n";
	return 0;
}