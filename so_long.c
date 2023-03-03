/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:56:19 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/02 22:28:52 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libsolong.h"

int main(int argc, char **argv)
{
	char	**map;

	if (argc != 2)
	{
		is_valid_map("there is an error");
		return (0);
	}
	else
	{
		map = convert_map(argv[1]);
				
	}
	return (0);
}
