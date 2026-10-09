/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 01:51:05 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 12:10:00 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *base, const char *str, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dstr;
	char	*dbase;

	i = 0;
	j = 0;
	dstr = (char *)str;
	dbase = (char *)base;
	if (len == 0)
		return (NULL);
	if (!dstr[0])
		return (&dbase[0]);
	while (i < len)
	{
		j = 0;
		while (i + j < len && dbase[i + j] == dstr[j])
		{
			j++;
			if (!dstr[j])
				return (&dbase[i]);
		}
		i++;
	}
	return (NULL);
}
