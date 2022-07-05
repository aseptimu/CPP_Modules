/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:37:42 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 16:01:01 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	// Constructor
	Cure();
	Cure(const Cure & copy);

	// Destructor
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);

	// Operators
	Cure & operator=(const Cure & assign);
};


#endif