/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_and_return.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 12:47:36 by mzhurba           #+#    #+#             */
/*   Updated: 2019/02/16 12:47:38 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_set	*clear_and_return(t_set **head)
{
	delete_list(head);
	return (NULL);
}
