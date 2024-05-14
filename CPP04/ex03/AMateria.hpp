#pragma once
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::string;
using std::cout;

class AMateria
{
	protected:
		string	_type;
		
	public:
		AMateria();
		AMateria(const AMateria& obj);
		virtual ~AMateria();
		AMateria&	operator=(const AMateria& obj);
		AMateria(string const & type);
		string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif
