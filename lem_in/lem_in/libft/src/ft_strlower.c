/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 13:45:12 by mzhurba           #+#    #+#             */
/*   Updated: 2019/07/02 15:12:17 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strlower(char *s)
{
	int i;

	i = -1;
	while (s[++i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
}
