/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ld.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 11:53:48 by exam              #+#    #+#             */
/*   Updated: 2019/02/26 11:59:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chess.h"

int	ft_check_ld(char **board, int x, int y, int size)
{
	int	i;

	i = 1;
	while ((y + i) <= (size - 1) && (x - i) >= 0)
	{
		if (board[y + i][x - i] == 'K')
			return (1);
		if (board[y + i][x - i] != '.')
			break ;
		i++;
	}
	return (0);
}