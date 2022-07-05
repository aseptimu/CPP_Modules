/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:01:40 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/04 11:03:38 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & copy)
{
	this->type = copy.type;
	std::cout << "Copy WrongCat constructor called" << std::endl;
}

// Destructors
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

// Operators

WrongCat & WrongCat::operator=(const WrongCat & assign)
{
	this->type = assign.type;
	return (*this);
}
