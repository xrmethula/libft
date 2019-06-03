/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmethula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:31:40 by xmethula          #+#    #+#             */
/*   Updated: 2019/06/03 11:59:06 by xmethula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*dptr;
	char	*sptr;
	size_t	i;

	dptr = (char *)dst;
	sptr = (char *)src;
	i = 0;
	if ((n == 0) || (dptr == sptr))
	{
		return (dst);
	}
	while ((i < n))
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dst);
}
