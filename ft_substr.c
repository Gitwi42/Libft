/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 08:04:22 by root              #+#    #+#             */
/*   Updated: 2026/10/07 14:10:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	slen;
	size_t	index;

	slen = 0;
	index = 0;
	while (s[slen])
		slen++;
	if (start >= slen)
		slen = 0;
	else if ((slen - start) > len)
		slen = len;
	dest = malloc(sizeof(char) * (slen + 1));
	if (!dest)
		return (NULL);
	while (index < slen)
		dest[index] = s[start + index++];
	dest[index] = '\0';
	return (dest);
}
