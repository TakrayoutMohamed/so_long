/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:45:30 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/11 01:42:49 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libgraphic.h"

static void    setImage(char *str, int width, int height, t_img *img)
{
	img->path = str;
	img->height = height;
	img->width = width;
}

void	put_img_to_window(char c, t_data *data, int x, int y)
{
	t_img   character;

	if (c == '1')
		setImage("/Users/mohtakra/Desktop/so_long/textures/wall_32x32.xpm", 32, 32, &character);
	else if (c == '0')
		setImage("/Users/mohtakra/Desktop/so_long/textures/space_32x32.xpm", 32, 32, &character);
	else if (c == 'P')
		setImage("/Users/mohtakra/Desktop/so_long/textures/player_32x32.xpm", 32, 32, &character);
	else if (c == 'C')
		setImage("/Users/mohtakra/Desktop/so_long/textures/coin_32x32.xpm", 32, 32, &character);
	else if (c == 'E')
		setImage("/Users/mohtakra/Desktop/so_long/textures/exit_32x32.xpm", 32, 32, &character);
	data->img = mlx_xpm_file_to_image(data->mlx, character.path, &character.width, &character.height);
	if (data->img == NULL)
	{
		free(data->mlx);
		error_str("ther is an error in put_img_to_windows() 1");
		exit(1);
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img, x * 32, 32 * y);
}

void	put_character_to_window(char **map, t_data *data)
{
	int     j;
	int     i;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			put_img_to_window(map[i][j], data, j, i);
			j++;
		}
		i++;
	}
}

void	map_to_graphic(char **map, t_data *data)
{
	put_character_to_window(map, data);
}
