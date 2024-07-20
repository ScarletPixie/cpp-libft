/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_is.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulhenr <paulhenr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:56:07 by paulhenr          #+#    #+#             */
/*   Updated: 2024/07/18 15:43:15 by paulhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.hpp"

bool str_isnumeric(const std::string& s)
{
	size_t i = 0;
	const size_t length = s.length();

	if (length == 0)
		return (false);
	
	if ((s[i] == '+' or s[i] == '-') and length > 1)
		i++;
	
	while (i < length)
	{
		if (!std::isdigit(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}
	
	return (true);
}

bool str_isnumeric(const char *s)
{
	size_t i = 0;

	if (s == nullptr or !*s)
		return (false);

	if ((*s == '-' or *s == '+') and s[1])
		i++;

	while (s[i])
	{
		if (!std::isdigit(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}

	return (true);
}


bool str_isspace(const std::string& s)
{
	size_t i = 0;
	const size_t length = s.length();

	if (length == 0)
		return (false);
	
	if ((s[i] == '+' or s[i] == '-') and length > 1)
		i++;
	
	while (i < length)
	{
		if (!std::isspace(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}
	
	return (true);
}

bool str_isspace(const char *s)
{
	size_t i = 0;

	if (s == nullptr or !*s)
		return (false);

	if ((*s == '-' or *s == '+') and s[1])
		i++;

	while (s[i])
	{
		if (!std::isspace(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}

	return (true);
}


bool str_isalpha(const std::string& s)
{
	size_t i = 0;
	const size_t length = s.length();

	if (length == 0)
		return (false);
	
	if ((s[i] == '+' or s[i] == '-') and length > 1)
		i++;
	
	while (i < length)
	{
		if (!std::isalpha(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}
	
	return (true);
}

bool str_isalpha(const char *s)
{
	size_t i = 0;

	if (s == nullptr or !*s)
		return (false);

	if ((*s == '-' or *s == '+') and s[1])
		i++;

	while (s[i])
	{
		if (!std::isalpha(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}

	return (true);
}


bool str_isalnum(const std::string& s)
{
	size_t i = 0;
	const size_t length = s.length();

	if (length == 0)
		return (false);
	
	if ((s[i] == '+' or s[i] == '-') and length > 1)
		i++;
	
	while (i < length)
	{
		if (!std::isalnum(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}
	
	return (true);
}

bool str_isalnum(const char *s)
{
	size_t i = 0;

	if (s == nullptr or !*s)
		return (false);

	if ((*s == '-' or *s == '+') and s[1])
		i++;

	while (s[i])
	{
		if (!std::isalnum(static_cast<unsigned char>(s[i])))
			return (false);
		i++;
	}

	return (true);
}
