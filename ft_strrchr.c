/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 19:58:40 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 12:13:54 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)str;
	while (dest[i])
		i++;
	while (i >= 0)
	{
		if (dest[i] == c)
			return (&dest[i]);
		i--;
	}
	return (0);
}
