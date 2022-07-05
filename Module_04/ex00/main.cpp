/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <aseptimu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:09:19 by aseptimu          #+#    #+#             */
/*   Updated: 2022/05/03 19:19:15 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();
	const WrongCat* z = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	k->makeSound();
	x->makeSound();
	z->makeSound();
	delete k;
	delete x;
	delete z;

	return 0; 
}
