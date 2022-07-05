/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:22:08 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 20:37:38 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_store[SSIZE];
public:
	// Constructors
	MateriaSource();
	MateriaSource(const MateriaSource & copy);

	// Destructor
	~MateriaSource();

	void learnMateria(AMateria* copy);
	AMateria* createMateria(std::string const & type);

	// Operators
	MateriaSource & operator=(const MateriaSource & assign);
};

#endif
