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

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try
    {
        Bureaucrat bertrand("Bertrand", 50);
        Bureaucrat roger("Roger", 100);

        // Création de formulaires avec des grades requis différents
        Form permis("Permis de Construire", 75, 50);
        Form augmentation("Augmentation des salaires", 30, 20);

        std::cout << permis << std::endl;
        std::cout << augmentation << std::endl;

        // Roger essaie de signer, mais il ne peut pas
        roger.signForm(permis);
        // Bertrand peut signer et essayer d'exécuter
        bertrand.signForm(permis);
        bertrand.signForm(augmentation);

        // Imprimer les formulaires après tentative de signature
        std::cout << permis << std::endl;
        std::cout << augmentation << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
