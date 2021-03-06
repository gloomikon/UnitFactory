/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 12:15:54 by exam              #+#    #+#             */
/*   Updated: 2019/02/26 12:32:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_up(char **board, int x, int y)
{
	int i;

	i = 1;
	while (y - i >= 0)
	{
		if (board[y - i][x] == 'K')
			return (1);
		if (board[y - i][x] != '.')
			break ;
		i++;
	}
	return (0);
}
