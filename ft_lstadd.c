/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 21:35:49 by opichou           #+#    #+#             */
/*   Updated: 2016/04/03 23:38:32 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = (*alst);
		*alst = new;
	}
}