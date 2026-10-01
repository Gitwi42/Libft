/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 03:09:28 by root              #+#    #+#             */
/*   Updated: 2026/10/01 04:03:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*dest;
	size_t		i;
	size_t		max_size;

	i = 0;
	max_size = (size_t)-1;
	if (size != 0 && nmemb > (max_size / size))
		return (0);
	dest = malloc(sizeof(char) * (nmemb * size));
	if (!dest)
		return (0);
	while (i < (nmemb * size))
		dest[i++] = 0;
	return (dest);
}
