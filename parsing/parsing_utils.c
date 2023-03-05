/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:30:39 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/06 00:46:27 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libparsing.h"

/*return true if the array is rectangle*/
int	is_rectangle(char **map)
{
	size_t	len;

	len = ft_strlen(*map);
	while (*map)
	{
		if (len != ft_strlen(*map))
			return (0);
		map++;
	}
	return (1);
}

/*return true if the array has more than 1 (exit ,player) or less*/
int	has_dup_ep(char **map)
{
	int	founded;

	founded = 0;
	while (*map)
	{
		if (ft_strchr(*map, 'E') || ft_strchr(*map, 'P'))
			founded++;
		if (founded > 2)
			return (1);
		map++;
	}
	if (founded > 2)
		return (1);
	return (0);
}

/*check if the entered is an array with .ber extension*/
int	is_ber_file(char *filename)
{
	int	len;

	len = ft_strlen(filename);
	if (len == 4)
		return (0);
	while (len > 4)
	{
		filename++;
		len--;
	}
	if (!ft_strncmp(filename, ".ber", 4))
		return (1);
	return (0);
}

/*return if the map is surrounded by walls (1)*/
int	is_surrounded(char **map)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(map[i]);
	while (map[i])
	{
		if (map[i][0] == '1')
		{
			if (map[i][len - 1] != '1')
				return (0);
		}
		else
			return (0);
		i++;
	}
	i--;
	while (map[0] && map[i] && map[0][j])
	{
		if (!(map[0][j] == '1' && map[i][j++] == '1'))
			return (0);
	}
	return (1);
}

/*return true if the string had an E char on it*/
int	has_exit(char **map)
{
	while (*map)
	{
		if (ft_strchr(*map, 'E'))
			return (1);
		map++;
	}
	return (0);
}

/*return true if the string had a 0 char on it*/
int	has_space(char **map)
{
	while (*map)
	{
		if (ft_strchr(*map, '0'))
			return (1);
		map++;
	}
	return (0);
}

/*return true if the string had a P char on it*/
int	has_player(char **map)
{
	while (*map)
	{
		if (ft_strchr(*map, 'P'))
			return (1);
		map++;
	}
	return (0);
}

/*return true if the string had a C char on it*/
int	has_collectible(char **map)
{
	while (*map)
	{
		if (ft_strchr(*map, 'C'))
			return (1);
		map++;
	}
	return (0);
}

/*return true if the map has only chars 0,1,C,E,P*/
int	has_acceptable_chars(char **map)
{
	while (*map)
	{
		
		while (**map)
		{
			if (**map != '0' && **map != '1')
				if (**map != 'C' && **map != 'E' && **map != 'P')
					return (0);
			(*map)++;
		}
		map++;
	}
	return (1);
}

/*return true if the player had a valid path to all the C , E*/
int	has_valid_path(char **map)
{
	return (1);
}
