/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 23:19:34 by opichou           #+#    #+#             */
/*   Updated: 2016/06/01 23:28:25 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_capitalize(char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		ft_toupper(src[i]);
		i++;
	}
	return (src);
}

