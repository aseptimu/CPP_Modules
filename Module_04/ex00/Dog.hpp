/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:54 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 19:10:16 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:

	// Constructors
	Dog();
	Dog(const Dog & copy);

	// Destructors
	virtual ~Dog();


	void makeSound() const;

	// Operators
	Dog & operator=(const Dog & assign);
};



#endif
