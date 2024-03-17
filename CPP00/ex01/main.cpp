#include "util.hpp"
#include "PhoneBook.hpp"

int main(void) {
	string cmd;
	PhoneBook phoneBook;		
	while (true) {
		println("1. ADD\n2. SEARCH\n3. EXIT\n");
		if (!getline(cin, cmd))
		{
			clear_stdin(cmd);
			continue;
		}
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH")
			phoneBook.searchContact();
		else
			println("Invalid command!!\n");
	}
	return 0;
}