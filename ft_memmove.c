/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 20:54:25 by nbeny             #+#    #+#             */
/*   Updated: 2016/11/12 21:53:11 by nbeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (&((unsigned char *)s1)[0] == &((unsigned char *)s2)[i])
		{
			i = n;
			while (((unsigned char *)s2)[i])
			{
				((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
				i--;
			}
			return (s1);
		}
		i++;
	}
	i = 0;
	return (ft_memcpy(s1, s2, n));
}
