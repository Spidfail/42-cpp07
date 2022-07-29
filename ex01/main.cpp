/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:55:39 by guhernan          #+#    #+#             */
/*   Updated: 2021/12/06 15:31:32 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main() {

	int		intArray[4] = {1, 1, 1, 1};
	float	floatArray[4] = {1.1, 1.1, 1.1, 1.1};
	double	doubleArray[4] = {1.2, 1.2, 1.2, 1.2};

	std::string		str1[4] = {"test1", "test1", "test1", "test1"};

	iter<int>(intArray, 4, incrementValue);
	iter<float>(floatArray, 4, incrementValue);
	iter<double>(doubleArray, 4, incrementValue);

	iter<std::string>(str1, 4, replaceValue);

	std::cout << "Check the array after interration :" << std::endl;
	std::cout << " -- int" << std::endl;
	for (int i = 0; i < 4 ; i++) {
		std::cout << intArray[i] << std::endl;
	}

	std::cout << " -- float" << std::endl;
	for (int i = 0; i < 4 ; i++) {
		std::cout << floatArray[i] << std::endl;
	}

	std::cout << " -- double" << std::endl;
	for (int i = 0; i < 4 ; i++) {
		std::cout << doubleArray[i] << std::endl;
	}

	std::cout << " -- str1" << std::endl;
	for (int i = 0; i < 4 ; i++) {
		std::cout << str1[i] << std::endl;
	}

}
