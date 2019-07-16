/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left_side.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:46:39 by mzhurba           #+#    #+#             */
/*   Updated: 2019/07/16 18:09:17 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		left_side(t_filler *filler)
{
	int	y;

	if (ft_strchr(MI[MH - 1], ME))
		return (1);
	y = -1;
	while (++y < MH)
		if (MI[y][0] == ME)
			return (1);
	return (0);
}