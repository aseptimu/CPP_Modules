/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:52 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 19:01:50 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* _b;
	
public:

	// Constructors
	Cat();
	Cat(const Cat & copy);

	// Destructors
	virtual ~Cat();

	// Getters
	Brain * getBrain() const;
	
	void makeSound() const;

	// Operators
	Cat & operator=(const Cat & assign);
};

#endif
