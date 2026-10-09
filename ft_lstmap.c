/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:13:17 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 11:13:32 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*dstemp;
	t_list	*lstemp;
	t_list	*newnode;

	if (lst == NULL)
		return (NULL);
	dest = ft_lstnew(f(lst->content));
	if (!dest)
		return (NULL);
	dstemp = dest;
	lstemp = lst->next;
	while (lstemp)
	{
		newnode = ft_lstnew(f(lstemp->content));
		if (!newnode)
		{
			ft_lstclear(&dest, del);
			return (NULL);
		}
		dstemp->next = newnode;
		dstemp = newnode;
		lstemp = lstemp->next;
	}
	return (dest);
}
