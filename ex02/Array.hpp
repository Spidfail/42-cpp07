/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:34:36 by guhernan          #+#    #+#             */
/*   Updated: 2021/12/06 19:04:21 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <class T>
class Array {

	private:
		const unsigned int	_sizeArray;
		T					*_array;

	public:
		Array() : _sizeArray(0), _array(new T) {
		}

		~Array() {
			if (_array) {
				if (_sizeArray > 0)
					delete [] _array;
				else
					delete _array; _array = NULL;
			}
		}

		Array(Array const &cpTarget) : _sizeArray(cpTarget._sizeArray), _array(NULL) {
			*this = cpTarget;
		}

		Array(unsigned int const &n) : _sizeArray(n), _array(new T[n]) {
		}

		/////////////////////////////////////////////////////////////////////////
		//
		Array	&operator=(Array const &cpTarget) {
			if (this->_array) {
				if (this->_sizeArray > 0)
					delete [] this->_array;
				else
					delete this->_array;
			}
			this->_array = new T[cpTarget._sizeArray];
			for (unsigned int i = 0 ; i < cpTarget._sizeArray ; i++) {
				this->_array[i] = cpTarget._array[i];
			}
			return *this;
		}

		T		&operator[](unsigned int const &index) {
			if (index >= this->_sizeArray || index < 0)
				throw (ArrayIndexException("Error : passed index overflow the array"));
			return this->_array[index];
		}

		/////////////////////////////////////////////////////////////////////////
		//
		const unsigned int &size(void) const {
			return this->_sizeArray;
		}

		/////////////////////////////////////////////////////////////////////////
		//
		class ArrayIndexException : public std::exception {
			private :
				const std::string	_rtnError;

			public :
				ArrayIndexException(std::string const	&error_msg) : _rtnError(error_msg) {
				}
				ArrayIndexException(const char			*error_msg) : _rtnError(error_msg) {
				}
				virtual ~ArrayIndexException() throw() {}
				const char *what() const throw() {
					return (_rtnError.data());
				}
		};
};

#endif
