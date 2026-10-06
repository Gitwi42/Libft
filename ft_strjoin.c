/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 08:47:59 by root              #+#    #+#             */
/*   Updated: 2026/10/06 11:42:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		dest[i] = s1[i++];
	while (s2[j])
		dest[i + j] = s2[j++];
	dest[i + j] = '\0';
	return (dest);
}
