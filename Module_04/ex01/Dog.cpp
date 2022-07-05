/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:10:00 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/04 11:22:59 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog() : Animal("Dog")
{
	_b = new Brain("Woof! Woof!");
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog & copy)
{
	this->type = copy.type;
	this->_b = new Brain();
	*(this->_b) = *(copy._b);
	std::cout << "Copy Dog constructor called" << std::endl;
}

// Destructor
Dog::~Dog()
{
	delete _b;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}

// Getters
Brain * Dog::getBrain() const
{
	return (_b);
}

// Operators

Dog & Dog::operator=(const Dog & assign)
{
	this->type = assign.type;
	if (this->_b)
		delete this->_b;
	this->_b = new Brain();
	*(this->_b) = *(assign._b);
	return (*this);
}
