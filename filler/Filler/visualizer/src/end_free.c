/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:44:15 by mzhurba           #+#    #+#             */
/*   Updated: 2019/07/16 22:47:56 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void	end_free(t_visualizer *v)
{
	usleep(200 * DELAY);
	delwin(v->header);
	delwin(v->score);
	delwin(v->map);
	ft_strdel(&v->p1);
	ft_strdel(&v->p2);
	endwin();
	getch();
}
