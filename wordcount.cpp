/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wordcount.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulhenr <paulhenr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:56:28 by paulhenr          #+#    #+#             */
/*   Updated: 2024/07/19 20:18:21 by paulhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.hpp"

size_t str_wordcount(const std::string& s)
{
	size_t i = 0;
	size_t wc = 0;
	unsigned char ch;
	size_t const length = s.length();

	while (i < length)
	{
		ch = static_cast<unsigned char>(s[i]);
		if (!std::isspace(s[i]))
		{
			wc++;
			while (i < length and !std::isspace(ch));
				i++;
		}
		i++;
	}
	return (wc);
}

size_t str_wordcount(const char *s)
{
	size_t i = 0;
	size_t wc = 0;
	unsigned char ch;

	if (s == nullptr)
		return (0);

	while (s[i])
	{
		ch = static_cast<unsigned char>(s[i]);
		if (!std::isspace(s[i]))
		{
			wc++;
			while (s[i] and !std::isspace(ch));
				i++;
		}
		i += (s[i]) ? 1 : 0;
	}
	return (wc);
}

size_t str_wordcount_set(const std::string& s, const std::string& set)
{
	size_t wc = 0; 
	size_t const strsize = s.length();

	for (size_t i = 0; i < strsize; i++)
	{
		if (set.find(s[i]) != std::string::npos)
		{
			wc++;
			while (i < strsize && set.find(s[i]) != std::string::string::npos)
				i++;
		}
	}
	return (wc);
}

size_t str_wordcount_set(const std::string& s, const char *set)
{
	size_t wc = 0; 
	size_t const strsize = s.length();

	if (set == nullptr)
		return (0);

	for (size_t i = 0; i < strsize; i++)
	{
		if (!ch_incharset(s[i], set))
		{
			wc++;
			while (i < strsize && !ch_incharset(s[i], set))
				i++;
		}
	}
	return (wc);
}

size_t str_wordcount_set(const char *s, const char *set)
{
	size_t wc = 0; 
	size_t i = 0;
	
	if (s == nullptr or set == nullptr)
		return (0);

	while (s[i])
	{
		if (!ch_incharset(s[i], set))
		{
			wc++;
			while (s[i] && !ch_incharset(s[i], set))
				i++;
		}
		i += (s[i]) ? 1 : 0;
	}
	return (wc);
}

size_t str_wordcount_set(const char *s, const std::string& set);
{
	size_t wc = 0; 
	size_t i = 0;
	
	if (s == nullptr or set == nullptr)
		return (0);

	while (s[i])
	{
		if (!ch_incharset(s[i], set))
		{
			wc++;
			while (s[i] && !ch_incharset(s[i], set))
				i++;
		}
		i += (s[i]) ? 1 : 0;
	}
	return (wc);
}
