/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/31 20:49:05 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 06:59:47 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"
#include <errno.h>

void	*ft_strndup(const char *s1, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char*)malloc((n * sizeof(*s1)) + 1);
	if (ptr)
	{
		while (n--)
		{
			ptr[i] = s1[i];
			i++;
		}
		ptr[i] = '\0';
	}
	else
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (ptr);
}
