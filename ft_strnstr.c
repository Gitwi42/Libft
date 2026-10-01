/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 01:51:05 by root              #+#    #+#             */
/*   Updated: 2026/10/01 03:36:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *base, const char *str, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len <= 0)
		return (NULL);
	if (!str[0])
		return (&base[0]);
	while (i < len)
	{
		j = 0;
		while (i + j < len && base[i + j] == str[j])
		{
			j++;
			if (!str[j])
				return (&base[i]);
		}
		i++;
	}
	return (NULL);
}
