/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:54:40 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/02 18:05:09 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
	
public:

	// Constructors
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &copy);

	// Destructor
	~WrongAnimal();

	//Getters / Setters
	std::string	getType(void) const;
	
	void makeSound(void) const;

	// Operators
	WrongAnimal & operator=(const WrongAnimal &assign);
};

#endif
