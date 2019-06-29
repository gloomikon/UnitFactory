/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 19:42:28 by marvin            #+#    #+#             */
/*   Updated: 2019/06/29 19:42:28 by marvin           ###   ########.fr       */
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
