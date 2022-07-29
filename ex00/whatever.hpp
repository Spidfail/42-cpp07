/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:15:26 by guhernan          #+#    #+#             */
/*   Updated: 2021/12/02 12:37:47 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>


template <typename TN>
void	swap(TN &num1, TN &num2) {
	TN	temp = num1;
	num1 = num2;
	num2 = temp;
}

/////////////////////////////////////////////////////////////////////////////////
//

template <typename TN>	// with one type
TN	min(TN const &num1, TN const &num2) {
	if (num2 <= num1)
		return num2;
	else
		return num1;
}

/////////////////////////////////////////////////////////////////////////////////
//

template <typename TN>	// with one type
TN	max(TN const &num1, TN const &num2) {
	if (num2 >= num1)
		return num2;
	else
		return num1;
}

#endif
