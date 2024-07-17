/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulhenr <paulhenr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:57:08 by paulhenr          #+#    #+#             */
/*   Updated: 2024/07/17 14:06:35 by paulhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HPP
#define LIBFT_HPP

#include <iostream>
#include <string>
#include <cctype>

//	str_is.cpp
bool str_isnumeric(const std::string& s);
bool str_isnumeric(const char *s);
bool str_isnumeric(char *s);
bool str_isspace(const std::string& s);
bool str_isspace(const char *s);
bool str_isspace(char *s);
bool str_isalpha(const std::string& s);
bool str_isalpha(const char *s);
bool str_isalpha(char *s);
bool str_isalnum(const std::string& s);
bool str_isalnum(const char *s);
bool str_isalnum(char *s);

#endif
