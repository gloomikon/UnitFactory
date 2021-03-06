/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:43:50 by mzhurba           #+#    #+#             */
/*   Updated: 2018/07/17 22:43:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *p)
{
	if (*p > 47 && *p < 58)
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
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
