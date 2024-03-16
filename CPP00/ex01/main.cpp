#include "util.hpp"
#include "PhoneBook.hpp"

using std::cout;
using std::cin;
using std::string;


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
	string cmd;
	PhoneBook phoneBook;		
	while (true) {
		println("1. ADD\n2. SEARCH\n3. EXIT\n");
		if (!getline(cin, cmd))
		{
			clear_stdin();
			continue;
		}
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH")
			println("SEARCH");
		else
			println("Invalid command!!\n");
	}
	return 0;
}