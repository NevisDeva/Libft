/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:49:33 by nbeny             #+#    #+#             */
/*   Updated: 2016/11/16 15:47:01 by nbeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned int i;

	i = 0;
	while (n-- && ((unsigned char *)s2)[i])
	{
		if (((unsigned char *)s2)[i] != (unsigned char)c)
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		if (((unsigned char *)s2)[i] == (unsigned char)c)
		{
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
			i++;
			return (&((unsigned char *)s1)[i]);
		}
		i++;
	}
	return (NULL);
}
