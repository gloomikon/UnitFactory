/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:42:58 by tpokalch          #+#    #+#             */
/*   Updated: 2018/11/20 20:40:21 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (*(s + i) != '\0')
	{
		*(s + i) = '\0';
		i++;
	}
}
