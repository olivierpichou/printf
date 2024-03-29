/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 11:36:37 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:24:58 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[j + i] = s2[i];
		i++;
	}
	s1[j + i] = '\0';
	return (s1);
}
