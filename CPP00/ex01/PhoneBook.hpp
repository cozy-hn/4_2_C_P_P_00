#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
private:
	int 	_nbContacts;
	int 	_start;
	Contact	_contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void searchContact();
	void printContact(int index);
};
#endif