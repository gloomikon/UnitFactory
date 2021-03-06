/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 21:52:25 by mzhurba           #+#    #+#             */
/*   Updated: 2018/07/19 22:00:02 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (char)((int)((str[i] - 97 + 42) % 26 + 97));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (char)((int)((str[i] - 65 + 42) % 26 + 65));
		i++;
	}
	return (str);
}
