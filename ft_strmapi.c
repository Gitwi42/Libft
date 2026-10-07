/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 08:48:28 by root              #+#    #+#             */
/*   Updated: 2026/10/07 14:33:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	index;
	size_t			len;

	index = 0;
	len = ft_strlen(s);
	dest = malloc(sizeof (char) * (len + 1));
	if (!dest)
		return (NULL);
	while (index < len)
	{
		dest[index] = f(index, s[index]);
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
