/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:38:19 by mzhurba           #+#    #+#             */
/*   Updated: 2018/10/24 18:34:03 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (++i < nb / 2)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
	}
	return (0);
}
