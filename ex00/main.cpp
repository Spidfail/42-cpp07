/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:15:22 by guhernan          #+#    #+#             */
/*   Updated: 2021/12/02 12:58:19 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main() {
	
	int		num1 = 21;
	int		num2 = 12;

	float	fnum1 = 21.20f;
	float	fnum2 = 12.20f;

	double	dnum1 = 21.20;
	double	dnum2 = 12.20;

	std::string		s1 = "manger";
	std::string		s2 = "des frites";
	std::string		s3 = "frites";

	std::cout << " Min and Max int -> 21 and 12" << std::endl;
	std::cout << ::min(num1, num2) << std::endl;
	std::cout << ::max(num1, num2) << std::endl << std::endl;

	std::cout << " Min and Max float -> 21 and 12" << std::endl;
	std::cout << ::min(fnum1, fnum2) << std::endl;
	std::cout << ::max(fnum1, fnum2) << std::endl << std::endl;

	std::cout << " Min and Max double -> 21 and 12" << std::endl;
	std::cout << ::min(dnum1, dnum2) << std::endl;
	std::cout << ::max(dnum1, dnum2) << std::endl << std::endl;

	std::cout << " Min and Max strings -> surchage operators '<' and '>' with std::string.compare() methd " << std::endl;
	std::cout << ::min(s1, s2) << std::endl;
	std::cout << ::max(s1, s2) << std::endl << std::endl;

	std::cout << " Min and Max same size str -> still .compare() " << std::endl;
	std::cout << ::min(s1, s3) << std::endl;
	std::cout << ::max(s1, s3) << std::endl << std::endl;


}
