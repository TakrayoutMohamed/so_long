/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohtakra <mohtakra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:11:56 by mohtakra          #+#    #+#             */
/*   Updated: 2023/03/04 17:16:15 by mohtakra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../libsolong.h"

int	error_str(char *str)
{
	ft_putstr_fd(str, 1);//you need to use your own printf
	return (0);
}
