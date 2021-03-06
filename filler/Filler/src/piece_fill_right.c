/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece_fill_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 19:28:30 by mzhurba           #+#    #+#             */
/*   Updated: 2019/07/16 23:00:12 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_point	piece_fill_right(t_filler *filler)
{
	t_point loop;

	loop.x = MW;
	while (--loop.x >= -PW && (loop.y = MH))
		while (--loop.y >= -PH)
			if (check_valid(filler, loop.y, loop.x))
				return (cr_point(loop.x, loop.y));
	return (cr_point(-PW - 1, -PH - 1));
}
