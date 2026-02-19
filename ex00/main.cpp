/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 21:03:42 by rhiguita          #+#    #+#             */
/*   Updated: 2026/02/19 21:21:00 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "--- TEST 1: Basic Actions ---" << std::endl;
    ClapTrap clappy("Clappy");
    clappy.attack("Target-A");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    std::cout << "\n--- TEST 2: Energy Depletion ---" << std::endl;
    ClapTrap runner("Runner");
    for (int i = 0; i < 11; i++) {
        runner.beRepaired(1);
    }
    runner.attack("Enemy");

    std::cout << "\n--- TEST 3: Canonical Form ---" << std::endl;
    ClapTrap original("Original");
    ClapTrap copy(original); // Constructor de copia
    ClapTrap assignee;
    assignee = original;

    std::cout << "\n--- TEST 4: Lethal Damage ---" << std::endl;
    ClapTrap victim("Victim");
    victim.takeDamage(20);
    victim.attack("Ghost");
    
	return 0;
}
