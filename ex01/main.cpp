/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 21:46:17 by rhiguita          #+#    #+#             */
/*   Updated: 2026/02/19 21:46:18 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "--- ClapTrap test ---" << std::endl;
	ClapTrap ct("Clappy");
	ct.attack("enemy");
	ct.takeDamage(3);
	ct.beRepaired(2);

	std::cout << "\n--- ScavTrap test ---" << std::endl;
	ScavTrap sc("Scavvy");
	sc.attack("big boss");
	sc.takeDamage(50);
	sc.beRepaired(20);
	sc.guardGate();

	std::cout << "\n--- Destruction order ---" << std::endl;
	return 0;
}
