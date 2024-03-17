#include "PhoneBook.hpp"
#include "util.hpp"

PhoneBook::PhoneBook() : _nbContacts(0), _start(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	Contact contact;
	string str;
	print("Enter first name: ");
	if (!getline(cin, str) || check_str(str))
		clear_stdin(str);
	contact.setFirstName(str);
	print("Enter last name: ");
	if (!getline(cin, str) || check_str(str))
		clear_stdin(str);
	contact.setLastName(str);
	print("Enter nickname: ");
	if (!getline(cin, str) || check_str(str))
		clear_stdin(str);
	contact.setNickname(str);
	print("Enter phone number: ");
	if (!getline(cin, str) || check_str(str))
		clear_stdin(str);
	contact.setPhoneNumber(str);
	print("Enter darkest secret: ");
	if (!getline(cin, str) || check_str(str))
		clear_stdin(str);
	contact.setDarkestSecret(str);
	_contacts[_start] = contact;
	_start = (_start + 1) % 8;
	if (_nbContacts < 8)
		_nbContacts++;
	println("Contact added successfully!!\n");
}

void PhoneBook::searchContact()
{
	if (_nbContacts == 0)
	{
		println("No contacts available!!\n");
		return;
	}
	print_bar_setw("Index");
	print_bar_setw("First name");
	print_bar_setw("Last name");
	print_bar_setw("Nickname");
	println("|");
	for (int i = 0; i < _nbContacts; i++)
	{
		Contact contact = _contacts[i];
		print_bar_setw(to_string(i));
		print_bar_setw(contact.getFirstName());
		print_bar_setw(contact.getLastName());
		print_bar_setw(contact.getNickname());
		println("|");
	}
	println("");
	string str;
	print("Enter index: ");
	if (!getline(cin, str) || str.empty())
	{
		clear_stdin(str);
		println("Invalid index!!\n");
		return;
	}
	if (str.length() > 1 || !isdigit(str[0]))
	{
		println("Invalid index!!\n");
		return;
	}
	int index = strtol(str.c_str(), 0, 10);
	if (index < 0 || index >= _nbContacts)
	{
		println("Invalid index!!\n");
		return;
	}
	Contact contact = _contacts[index];
	println("First name: " + contact.getFirstName());
	println("Last name: " + contact.getLastName());
	println("Nickname: " + contact.getNickname());
	println("Phone number: " + contact.getPhoneNumber());
	println("Darkest secret: " + contact.getDarkestSecret() + "\n");
}