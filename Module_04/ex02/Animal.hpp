/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:57 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 15:06:10 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;

public:

	// Constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal &copy);

	// Destructor
	virtual ~Animal();

	//Getters / Setters
	std::string	getType(void) const;
	
	virtual void makeSound(void) const = 0;

	// Operators
	Animal & operator=(const Animal &assign);
};


#endif
