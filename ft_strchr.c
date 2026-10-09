/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 19:47:02 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 11:51:16 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*dest;

	dest = (char *)str;
	i = 0;
	while (dest[i])
	{
		if (dest[i] == c)
			return (&dest[i]);
		i++;
	}
	if (c == '\0')
		return (&dest[i]);
	return (0);
}
