/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:32:00 by tpokalch          #+#    #+#             */
/*   Updated: 2019/02/14 17:55:24 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		int_putstr(char *s, int fd)
{
	int i;

	i = 0;
	close(fd);
	while (*(s + i) != '\0')
	{
		write(1, s + i, 1);
		i++;
	}
	return (0);
}
