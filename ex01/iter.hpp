/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:10:51 by guhernan          #+#    #+#             */
/*   Updated: 2021/12/06 15:30:36 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <typeinfo>

template <typename Add>
Add		&incrementValue(Add &value) {
	++value;
	return value;
}

template <typename Add>
Add		&replaceValue(Add &oldValue, Add &newValue) {
	oldValue = newValue;
	return newValue;
}

template <typename Add>
void	iter(Add *array, int arrLength, Add &(*mapFun)(Add &)) {

	std::cout << "This is the array of [" << typeid(Add).name() << "] before the replacement :" << std::endl;
	for (int i = 0; i < arrLength ; i++) {
		std::cout << array[i] << std::endl;
	}

	for (int i = 0; i < arrLength ; i++) {
		std::cout << mapFun(array[i]) << std::endl;
	}
}


template <typename Add>
void	iter(Add *array, int arrLength, Add &(*mapFun)(Add &, Add &)) {

	std::cout << "This is the array of [" << typeid(array).name() << "] before the replacement :" << std::endl;
	for (int i = 0; i < arrLength ; i++) {
		std::cout << array[i] << std::endl;
	}

	Add		value;
	std::cout << "Please enter a string for the test : ";
	std::cin >> value;
	std::cout << "This is the array after the replacement :" << std::endl;

	for (int i = 0; i < arrLength ; i++) {
		std::cout << mapFun(array[i], value) << std::endl;
	}
}

#endif

///////////////////// Another use of define type for a template :
//
// template<typename V, int N>
// int array_size(V (&array)[N]) {
	// return N;
// }
//
// int tab[10];
// int tab_size = array_size(tab);
