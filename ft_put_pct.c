/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 17:29:27 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:20:05 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ret_pct(va_list ap)
{
	ft_put_com("entering ft_ret_pct", "");
	(void)ap;
	return (ft_strdup("%"));
}

char		*ft_ret_null(va_list ap)
{
	ft_put_com("entering ft_ret_null", "");
	(void)ap;
	return (NULL);
}
