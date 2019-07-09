/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:44:19 by mzhurba           #+#    #+#             */
/*   Updated: 2018/07/17 22:44:21 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *p)
{
	if (*p > 64 && *p < 91)
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	char *p;

	p = str;
	while (*p != '\0')
	{
		if (check(p) == 0)
			return (0);
		p++;
	}
	return (1);
}
