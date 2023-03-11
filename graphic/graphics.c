/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:50:32 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/11 01:39:39 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libgraphic.h"

static int	get_nbr_rows(char **map)
{
	int	rows;

	rows = 0;
	while (map[0][rows])
		rows++;
	return (rows);
}

static int	get_nbr_cols(char **map)
{
	int	cols;

	cols = 0;
	while (*map)
	{
		cols++;
		map++;
	}
	return (cols);
}

void	run_graphics(char **map)
{
	t_data	data;
	int	cols;
	int	rows;

	rows = get_nbr_rows(map);
	cols = get_nbr_cols(map);
	data.mlx = mlx_init();
	if (data.mlx == NULL)
		exit(1);
	data.win = mlx_new_window(data.mlx, rows * 32, cols * 32, "alvares");
	if (data.win == NULL)
	{
		free(data.mlx);
		exit(1);
	}
	map_to_graphic(map, &data);
	mlx_loop(data.mlx);
}