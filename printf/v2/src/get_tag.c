/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 17:42:24 by mzhurba           #+#    #+#             */
/*   Updated: 2019/06/20 12:06:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_tag(const char *restrict format, t_pf_env *e)
{
	int	i;
	int	tmp;

	init_flag(&e->flag);
	e->flag.f |= SM_NO_MOD;
	i = 0;
	if (IS_NUM(format[e->i]))
	{
		tmp = ft_atoi(format + e->i);
		while (IS_NUM(format[e->i + i]))
			i++;
		if (format[e->i + i] == '$')
		{
			e->tag = tmp;
			e->i += i + 1;
		}
	}
}