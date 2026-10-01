/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:42:23 by root              #+#    #+#             */
/*   Updated: 2026/10/01 03:23:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (n == 0)
		return (dest);
	else if ((d + (n - 1) < s) || d > s)
	{
		i = 0;
		while (i < n)
			d[i] = s[i++];
	}
	else
	{
		i = n - 1;
		while (i > 0)
			d[i] = s[i--];
		d[i] = s[i];
	}
	return (dest);
}
