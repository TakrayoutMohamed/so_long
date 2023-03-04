/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libparsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:30:47 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/04 17:50:04 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPARSING_H
# define LIBPARSING_H
# include <stdio.h>
# include <stdlib.h>
	int	is_rectangle(char **map);
	int	has_dup_io(char **map);
	int	is_ber_file(char *filename);
	int	is_surrounded(char **map);
	int	has_exit(char **map);
	int	has_space(char **map);
	int	has_player(char **map);
	int	has_collectible(char **map);
	int	has_valid_path(char **map);

#endif
