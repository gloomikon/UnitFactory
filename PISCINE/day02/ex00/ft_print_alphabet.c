/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:16:41 by mzhurba           #+#    #+#             */
/*   Updated: 2018/07/12 21:16:44 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar	(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c != '{')
	{
		ft_putchar(c);
		c++;
	}
}
