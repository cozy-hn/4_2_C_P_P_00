#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

using std::cout;
using std::string;

class Brain
{
	public:
		Brain();
		Brain(const Brain& obj);
		~Brain();
		Brain&	operator=(const Brain& obj);

	private:
		string ideas[100];

};

#endif
