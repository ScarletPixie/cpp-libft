/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulhenr <paulhenr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:57:49 by paulhenr          #+#    #+#             */
/*   Updated: 2024/07/19 22:30:34 by paulhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool ch_incharset(const char c, const std::string& set)
{
	return (set.find(c) != std::string::npos);
}

bool ch_incharset(const char c, const char *set)
{
	if (set == nullptr)
		return (false);

	for (int i = 0; set[i]; i++)
	{
		if (c == set[i])
			return (true);
	}
	return (false);
}

std::string& str_r_trim(std::string& str, const std::string& set)
{
	size_t	trim_end = str.find_last_not_of(set);

	trim_end = (trim_end + 1) * (trim_end != std::string::npos);
	str.erase(trim_end);

	return (str);
}

std::string& str_l_trim(std::string& str, const std::string& set)
{
	size_t	trim_end = str.find_first_not_of(set);

	trim_end *= (trim_end != std::string::npos);
	str.erase(0, trim_end);

	return (str);
}

std::string& str_rl_trim(std::string& str, const std::string& set)
{
	str_l_trim(str, set);
	str_r_trim(str, set);

	return (str);
}

std::string& str_r_trim(std::string& str, const char *set)
{
	size_t	trim_end;
	
	if (set == nullptr)
		return (str);

	trim_end = str.find_last_not_of(set);
	trim_end = (trim_end + 1) * (trim_end != std::string::npos);
	str.erase(trim_end);

	return (str);
}

std::string& str_l_trim(std::string& str, const char *set)
{
	size_t	trim_end;

	if (set == nullptr)
		return (str);

	trim_end = str.find_first_not_of(set);
	trim_end *= (trim_end != std::string::npos);
	str.erase(0, trim_end);

	return (str);
}

std::string& str_rl_trim(std::string& str, const char *set)
{
	size_t new_end;
	size_t new_start;

	if (set == nullptr)
		return (str);

	new_start = str.find_first_not_of(set);
	new_start *= new_start != std::string::npos;
	str.erase(0, new_start);

	new_end = str.find_last_not_of(set);
	new_end = (new_end + 1) * (new_end != std::string::npos);
	str.erase(new_end);

	return (str);
}
