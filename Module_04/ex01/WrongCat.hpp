/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:01:31 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/02 18:02:47 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:

	// Constructors
	WrongCat();
	WrongCat(const WrongCat & copy);

	// Destructors
	~WrongCat();

	void makeSound() const;

	// Operators
	WrongCat & operator=(const WrongCat & assign);
};

#endif
