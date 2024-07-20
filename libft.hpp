/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulhenr <paulhenr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:57:08 by paulhenr          #+#    #+#             */
/*   Updated: 2024/07/19 20:18:42 by paulhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HPP
#define LIBFT_HPP

#include <iostream>
#include <string>
#include <cctype>

/******************************* str_is.cpp **********************************/

bool str_isnumeric(const std::string& s);
bool str_isnumeric(const char *s);

bool str_isspace(const std::string& s);
bool str_isspace(const char *s);

bool str_isalpha(const std::string& s);
bool str_isalpha(const char *s);

bool str_isalnum(const std::string& s);
bool str_isalnum(const char *s);

/*****************************************************************************/


/***************************** str_utils.cpp *********************************/

bool ch_incharset(const char c, const std::string& set);
bool ch_incharset(const char c, const char *set);

/*****************************************************************************/


/***************************** wordcount.cpp *********************************/

size_t str_wordcount(const std::string& s);
size_t str_wordcount(const char *s);

size_t str_alpha_wordcount(const std::string& s);
size_t str_alpha_wordcount(const char *s);

size_t str_wordcount_set(const std::string& s, const std::string& set);
size_t str_wordcount_set(const std::string& s, const char *set);
size_t str_wordcount_set(const char *s, const char *set);
size_t str_wordcount_set(const char *s, const std::string& set);

/*****************************************************************************/

#endif
