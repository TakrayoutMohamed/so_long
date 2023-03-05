/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libsolong.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:12:30 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/05 19:24:20 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBSOLONG_H
# define LIBSOLONG_H
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <mlx.h>
# include "./libft/get_next_line/get_next_line.h"
# include "./libft/libft/libft.h"
# include "./parsing/libparsing.h"

	/*the handle error functions*/
	int		error_str(char *str);
	/*the handle error functions*/
	int		get_nbr_line(char *filename);
	void	free_matrix(char **matrix);
	char	**convert_map(char *filemap);
#endif