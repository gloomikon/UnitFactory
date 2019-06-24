/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 14:49:51 by mzhurba           #+#    #+#             */
/*   Updated: 2019/06/19 18:34:01 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	spec_percent(t_pf_env *e)
{
	if (e->flag.f & F_MINUS)
	{
		e->ret += write(e->fd, "%", 1);
		while (e->flag.width-- > 1)
			e->ret += write(e->fd, " ", 1);
	}
	else
	{
		while (e->flag.width-- > 1)
			e->ret += ((e->flag.f & F_ZERO) ?
			write(e->fd, "0", 1) : write(e->fd, " ", 1));
		e->ret += write(e->fd, "%", 1);
	}
	++e->i;
}