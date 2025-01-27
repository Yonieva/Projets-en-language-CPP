/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:39:20 by yonieva           #+#    #+#             */
/*   Updated: 2025/01/27 16:39:20 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):
	name(name), title(title) {
	std::cout << this->name << ": What a boring day\n";
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!\n";
}

std::string const &Warlock::getName(void) const {
	return (this->name);
}

std::string const &Warlock::getTitle(void) const {
	return (this->title);
}

void Warlock::setTitle(std::string const &title) {
	this->title = title;
}

void Warlock::introduce(void) const {
	std::cout << this->name << ": My name is " << this->name << ", " << this->title << "!\n";
}