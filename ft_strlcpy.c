/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:21:03 by root              #+#    #+#             */
/*   Updated: 2026/10/01 03:36:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (n == 0)
		return (count);
	if (count + 1 < n)
	{
		while (i < count)
			dest[i] = src[i++];
	}
	else
	{
		while (i < n - 1)
			dest[i] = src[i++];
	}
	dest[i] = '\0';
	return (count);
}
