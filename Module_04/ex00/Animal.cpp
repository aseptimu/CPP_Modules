/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:26 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/04 11:03:28 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Field Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type) 
{
	std::cout << "Copy Animal constructor called" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "ERROR SOUND!" << std::endl;
}

// Operators
Animal & Animal::operator=(const Animal &assign)
{
	this->type = assign.type;
	return (*this);
}
