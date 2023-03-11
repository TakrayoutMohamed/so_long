/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:56:19 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/10 22:21:13 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libsolong.h"

int main(int argc, char **argv)
{
	char	**map;
	
	if (argc != 2)
	{
		error_str("there is an error1");
		return (0);
	}
	else
	{
		if (!is_ber_file(argv[1]))
			return (error_str("the extension not accepted \ntry .ber"), 0);
		map = convert_map(argv[1]);
		if (!is_valid_map(map))
			return (error_str("the map not accepted"), 0);
		run_graphics(map);
	}
	return (0);
}
