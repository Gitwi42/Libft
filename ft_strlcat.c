/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:40:37 by root              #+#    #+#             */
/*   Updated: 2026/10/01 04:27:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < dstsize && dest[j])
		j++;
	size = j + ft_strlen(src);
	if (dstsize == 0)
		return (size);
	else if (dstsize - 1 >= j)
	{
		while (src[i] && ((j + i) < dstsize - 1))
			dest[j + i] = src[i++];
		dest[j + i] = '\0';
	}
	else
		return (dstsize + ft_strlen(src));
	return (size);
}
