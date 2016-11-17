/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:16:43 by nbeny             #+#    #+#             */
/*   Updated: 2016/11/17 15:12:08 by nbeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nxtlst;

	while (*alst)
	{
		nxtlst = (*alst)->next;
		del((&(*alst)->content), (*alst)->content_size);
		free(*alst);
		*alst = NULL;
		*alst = nxtlst;
	}
	*alst = NULL;
}
