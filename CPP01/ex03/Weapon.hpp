/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:18:21 by adaloui           #+#    #+#             */
/*   Updated: 2022/04/30 19:56:02 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>

class Weapon
{
public:
	Weapon(std::string init_type);
	~Weapon(void);

	const std::string& getType(void) const;
	bool setType(std::string const & type);
private:
	std::string _type;
};

#endif