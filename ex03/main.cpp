/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 23:49:38 by rhiguita          #+#    #+#             */
/*   Updated: 2026/02/19 23:52:44 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "--- DiamondTrap: Construction Chaining ---" << std::endl;
    // La instancia de ClapTrap debe crearse una sola vez 
    DiamondTrap dt("Omega");

    std::cout << "\n--- Identity Protocols ---" << std::endl;
    // Muestra su nombre y su nombre de ClapTrap (con el sufijo _clap_name) [cite: 211, 221]
    dt.whoAmI(); 

    std::cout << "\n--- Battle Systems Test ---" << std::endl;
    // Utiliza el ataque de ScavTrap [cite: 215]
    dt.attack("Target-Z");
    
    // Parámetros: 100 HP (Frag), 50 EP (Scav), 30 AD (Frag) [cite: 212, 213, 214]
    dt.takeDamage(30);
    dt.beRepaired(20);

    std::cout << "\n--- Special Modules ---" << std::endl;
    dt.guardGate();    // Heredado de ScavTrap [cite: 219]
    dt.highFivesGuys(); // Heredado de FragTrap [cite: 219]

    std::cout << "\n--- Decommissioning ---" << std::endl;
    return 0;
}/* ************************************************************************** */
