/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:39:07 by mzhurba           #+#    #+#             */
/*   Updated: 2019/07/16 22:44:49 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	free_all(t_filler *filler)
{
	int i;

	i = -1;
	while (++i < MH)
		ft_strdel(&MI[i]);
	free(MI);
	i = -1;
	while (++i < PH)
		ft_strdel(&PI[i]);
	free(PI);
}
