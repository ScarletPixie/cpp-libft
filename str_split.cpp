/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulhenr <paulhenr@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:30:49 by paulhenr          #+#    #+#             */
/*   Updated: 2024/07/19 23:59:32 by paulhenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <vector>

std::vector<std::string> str_split(const std::string& str, const std::string& delimiter)
{
	size_t curr_token_end = 0;
	size_t curr_token_size = 0;
	size_t curr_token_start = 0;
	std::vector<std::string> tokens;

	while (curr_token_start < str.length())
	{
		curr_token_start = str.find_first_not_of(delimiter, curr_token_start);
		if (curr_token_start == std::string::npos)
			break ;
		
		curr_token_end = str.find_first_of(delimiter, curr_token_start);
		if (curr_token_end == std::string::npos)
			curr_token_end = str.length();

		curr_token_size = curr_token_end - curr_token_start;

		tokens.push_back(str.substr(curr_token_start, curr_token_size));

		curr_token_start = curr_token_end;
	}

	return (tokens);
}
