/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 11:07:30 by mzhurba           #+#    #+#             */
/*   Updated: 2019/08/01 13:04:08 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

/*
** MAIN
*/

int	main(int argc, char **argv)
{
	t_lemin	lemin;

	ft_bzero(&lemin, sizeof(t_lemin));
	read_data(&lemin);
	printf("SUCCESS\n");
	system("leaks -q a.out");
}
