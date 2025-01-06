/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:43:45 by yonieva           #+#    #+#             */
/*   Updated: 2024/12/30 14:43:45 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {

        std::cout << "\n=== TEST 1: Grade insuffisant pour signer ===" << std::endl;
        {
            Bureaucrat Laurent("Laurent", 150); // Très bas grade
            ShrubberyCreationForm shrubbery("garden");
            try
            {
                Laurent.signAForm(shrubbery); // Laurent ne peut pas signer
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << std::endl;
            }
        }

        std::cout << "\n=== TEST 2: Grade insuffisant pour exécuter ===" << std::endl;
        {
            Bureaucrat Severine("Severine", 140);
            ShrubberyCreationForm shrubbery("garden");

            Severine.signAForm(shrubbery);  // Severine peut signer
            try
            {
                Severine.executeAForm(shrubbery); // Severine ne peut pas exécuter
            }
            catch (const std::exception &e)
            {
                std::cerr << e.what() << std::endl;
            }
        }

        std::cout << "\n=== TEST 3: Réussite complète ===" << std::endl;
        {
            Bureaucrat Arthur("Arthur", 1); // Bureaucrate avec un grade très élevé
            ShrubberyCreationForm shrubbery("park");

            Arthur.signAForm(shrubbery);     // Arthur signe le formulaire
            Arthur.executeAForm(shrubbery); // Arthur exécute le formulaire avec succès
        }

        std::cout << "\n=== TEST 4: RobotomyRequestForm ===" << std::endl;
        {
            Bureaucrat Laurence("Laurence", 20);
            RobotomyRequestForm robot("The Corrector");

            Laurence.signAForm(robot); // Laurence peut signer
            Laurence.executeAForm(robot); // Laurence peut exécuter
            Laurence.executeAForm(robot); // Test plusieurs exécutions pour voir le 50% succès
            Laurence.executeAForm(robot);
            Laurence.executeAForm(robot);
        }

        std::cout << "\n=== TEST 5: PresidentialPardonForm ===" << std::endl;
        {
            Bureaucrat president("President", 1);
            PresidentialPardonForm pardon("The Corrector");

            president.signAForm(pardon);   // President signe
            president.executeAForm(pardon); // President exécute
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }

    return 0;
}
