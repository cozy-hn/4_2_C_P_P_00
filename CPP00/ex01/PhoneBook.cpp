#include "PhoneBook.hpp"
#include "util.hpp"

using std::cin;


PhoneBook::PhoneBook() : _nbContacts(0), _start(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	Contact contact;
	string str;
	print("Enter first name: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin();
		str = "Unknown";
	}
	contact.setFirstName(str);
	print("Enter last name: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin();
		str = "Unknown";
	}
	contact.setLastName(str);
	print("Enter nickname: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin();
		str = "Unknown";
	}
	contact.setNickname(str);
	print("Enter phone number: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin();
		str = "Unknown";
	}
	contact.setPhoneNumber(str);
	print("Enter darkest secret: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin();
		str = "Unknown";
	}
	contact.setDarkestSecret(str);
	_contacts[_start] = contact;
	_start = (_start + 1) % 8;
	if (_nbContacts < 8)
		_nbContacts++;
	println("Contact added successfully!!");
}