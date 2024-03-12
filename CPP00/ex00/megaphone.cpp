#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::string;
using std::toupper;

void print_upper(const string &str) {
	for (size_t i = 0; i < str.length(); i++)
		cout << static_cast<char>(toupper(str[i]));
}

int main(int argc, char **argv) {
	if (argc == 1)
		print_upper("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else
		for (int i = 1; i < argc; i++)
			print_upper(argv[i]);
	print_upper("\n");
}
