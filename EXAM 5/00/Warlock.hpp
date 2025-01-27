/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:40:37 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/27 16:40:37 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(Warlock const &other);

	Warlock &operator=(Warlock const &other);
public:
	Warlock(std::string const &name, std::string const &title);
	virtual ~Warlock();

	std::string const &getName(void) const;
	std::string const &getTitle(void) const;

	void setTitle(std::string const &title);

	void introduce(void) const;
};

#endif