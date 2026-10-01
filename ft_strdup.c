/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 04:09:06 by root              #+#    #+#             */
/*   Updated: 2026/10/01 04:26:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
		dest[i] = s[i++];
	dest[i] = '\0';
	return (dest);
}
