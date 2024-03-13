#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
using std::string;

class Contact
{
	private:
		string	_firstName;
		string	_lastName;
		string	_nickname;
		string	_phoneNumber;
		string	_darkestSecret;
	public:
		Contact();
		~Contact();
		string getFirstName() const;
		string getLastName() const;
		string getNickname() const;
		string getPhoneNumber() const;
		string getDarkestSecret() const;
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setNickname(string nickname);
		void setPhoneNumber(string phoneNumber);
		void setDarkestSecret(string darkestSecret);
};
#endif