/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:30:50 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 20:06:00 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define SSIZE 4

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
	
public:
	// Constructors
	AMateria(std::string const & type);
	AMateria();
	AMateria(const AMateria & copy);

	// Getters
	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	// Destructor
	virtual ~AMateria();

	// Operators
	AMateria & operator=(const AMateria & assign);
};

#endif
