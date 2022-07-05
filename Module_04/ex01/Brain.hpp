/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:30:03 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 14:33:31 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	static const int _iNum = 100;
	std::string	ideas[_iNum];
public:

	// Constructors
	Brain();
	Brain(const std::string idea);
	Brain(const Brain & copy);

	// Destructor
	~Brain();	

	// Getters
	static int	getINum();
	const std::string *getIdeas() const;

	void	printIdeas(void) const;
	void	setIdeas(const std::string ideas);

	// Operators
	Brain & operator=(const Brain & assign);
};


#endif