/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 23:20:25 by rhiguita          #+#    #+#             */
/*   Updated: 2026/02/19 23:20:31 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "--- FragTrap: Construction Chaining ---" << std::endl;
    FragTrap ft("Fraggy");

    std::cout << "\n--- Action Test ---" << std::endl;
    ft.attack("Target-B");
    ft.takeDamage(20);
    ft.beRepaired(10);
    ft.highFivesGuys();

    std::cout << "\n--- Resource Depletion Check ---" << std::endl;
    // FragTrap tiene 100 EP, a diferencia de los 10 de ClapTrap
    std::cout << "FragTrap is ready for heavy duty." << std::endl;

    std::cout << "\n--- Destruction Chaining ---" << std::endl;
    return 0;
}
