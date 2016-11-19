/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 16:08:55 by nbeny             #+#    #+#             */
/*   Updated: 2016/11/19 16:51:22 by nbeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max(int *tab, size_t n)
{
	size_t	i;
	int		max;

	i = 0;
	max = tab[0];
	while (i < n)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
