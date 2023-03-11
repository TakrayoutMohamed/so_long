/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraphic.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:32:54 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/11 23:04:44 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPHIC_H
# define LIBGRAPHIC_H
# include <stdio.h>
# include <stdlib.h>
# include "./../libft/libft/libft.h"
# include "./../libsolong.h"
# include <mlx.h>
	typedef struct s_data
	{
		void	*win;
		void	*mlx;
		void	*img;
	} t_data;

	typedef struct s_img
	{
		int		width;
		int		height;
		char	*path;
	} t_img;

	void	run_graphics(char **map);
	void	map_to_graphic(char **map, t_data *data);
	int		handle_keypress(int keysym, t_data *data);

#endif