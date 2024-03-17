#include "util.hpp"

void println(const string &str) {
	cout << str << "\n";
}

void print(const string &str) {
	cout << str;
}

void print_bar_setw(const string &str) {
	string tmp;
	if (str.length() > 10)
	{
		tmp = str.substr(0, 9);
		tmp += ".";
	}
	else
		tmp = str;
	cout << "|" << setw(10) << tmp;
}

void clear_stdin(string &str) {
	if (cin.eof())
		println("");
	cin.clear();
	clearerr(stdin);
	str = "Unknown";
}

bool check_str(const string &str) {
	bool all_space = true;
	bool is_print = false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (isspace(str[i]) == 0)
			all_space = false;
		if (isprint(str[i]) == 0)
			is_print = true;
	}
	if (str.empty()|| all_space || is_print)
	{
		println("Invalid input!! => Unknown");
		return true;
	}
	return false;
}