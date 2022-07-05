/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:36:32 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 16:08:13 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	// Constructor
	Ice();
	Ice(const Ice & copy);

	// Destructor
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);

	// Operators
	Ice & operator=(const Ice & assign);
};



#endif