#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(string firstName, string lastName, string nickname, string darkestSecret, string phoneNumber) \
:_firstName(firstName), _lastName(lastName), _nickname(nickname), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) 
{}


string Contact::getFirstName() const
{
	return _firstName;
}

string Contact::getLastName() const
{
	return _lastName;
}

string Contact::getNickname() const
{
	return _nickname;
}

string Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}

void Contact::setFirstName(string firstName)
{
	_firstName = firstName;
}

void Contact::setLastName(string lastName)
{
	_lastName = lastName;
}

void Contact::setNickname(string nickname)
{
	_nickname = nickname;
}

void Contact::setPhoneNumber(string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

Contact::~Contact() {}