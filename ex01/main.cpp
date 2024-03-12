#include "main.hpp"

void println(const string &str) {
	cout << str << "\n";
}

void print(const string &str) {
	cout << str;
}

void clear_stdin() {
	if (cin.eof())
		println("");
	cin.clear();
	clearerr(stdin);
}

int main(void) {
	string str;
	string command;
	PhoneBook phoneBook;		
	while (true) {
		println("1. ADD\n2. SEARCH\n3. EXIT\n");
		if (!getline(cin, str))
		{
			clear_stdin();
			continue;
		}
		if (str == "EXIT")
			break;
		else if (str == "ADD")
			phoneBook.addContact();
		else if (str == "SEARCH")
			println("SEARCH");
		else
			println("Invalid command!!\n");
	}
	return 0;
}