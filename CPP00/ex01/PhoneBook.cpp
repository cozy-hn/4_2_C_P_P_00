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

void PhoneBook::searchContact()
{
	if (_nbContacts == 0)
	{
		println("No contacts available!!");
		return;
	}
	println("     index|first name| last name|  nickname");
	for (int i = 0; i < _nbContacts; i++)
	{
		Contact contact = _contacts[i];
		println("         " + std::to_string(i) + "|" + contact.getFirstName() + "|" + contact.getLastName() + "|" + contact.getNickname());
	}
	string str;
	print("Enter index: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin();
		println("Invalid index!!");
		return;
	}
	int index = std::stoi(str);
	if (index < 0 || index >= _nbContacts)
	{
		println("Invalid index!!");
		return;
	}
	Contact contact = _contacts[index];
	println("First name: " + contact.getFirstName());
	println("Last name: " + contact.getLastName());
	println("Nickname: " + contact.getNickname());
	println("Phone number: " + contact.getPhoneNumber());
	println("Darkest secret: " + contact.getDarkestSecret());
}