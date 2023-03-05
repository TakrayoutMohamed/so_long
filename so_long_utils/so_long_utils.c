/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:30:30 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/06 00:50:12 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libsolong.h"

/*this function returns the number of lines in a file*/
int	get_nbr_line(char *filename)
{
	int		nbr_line;
	int		fd;
	char	*line;

	nbr_line = 0;
	fd = open(filename, O_RDONLY, 777);
	if (fd == -1)
		return (error_str("there is an error while opening file"), -1);
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		nbr_line++;
		line = get_next_line(fd);
	}
	close(fd);
	free(line);
	return (nbr_line);
}

/*used to free the matrix properly*/
void	free_matrix(char **matrix)
{
	char	**temp;

	temp = matrix;
	while (*matrix)
	{
		free(*matrix);
		matrix++;
	}
	matrix = temp;
	free(matrix);
}

/*trim a string and than free the old one*/
/*its been used here to remove the new line on the string*/
char	*trim_and_free(char *str)
{
	char	*trimed_str;

	trimed_str = ft_strtrim(str, "\n");
	free(str);
	return (trimed_str);
}

/*convert a map from a file into a matrix or array 2D*/
char	**convert_map(char *filemap)
{
	int		fd_map;
	char	**matrix;
	char	*line;
	int		i;

	i = 0;
	fd_map = open(filemap, O_RDONLY);
	if (fd_map == -1)
		return (error_str("an error while opening the file of map"), exit(1), NULL);
	matrix = (char **) malloc(sizeof(char *) * get_nbr_line(filemap) + 1);
	if (!matrix)
		return (close(fd_map), NULL);
	while (i < get_nbr_line(filemap))
	{
		line = get_next_line(fd_map);
		line = trim_and_free(line);
		matrix[i] = (char *)malloc(sizeof(char) * ft_strlen(line) + 1);
		if (!matrix[i])
			return (free_matrix(matrix), free(line), NULL);
		ft_strlcpy(matrix[i++], line, ft_strlen(line) + 1);
		free(line);
	}
	matrix[i] = NULL;
	return (close(fd_map), matrix);
}
