/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 02:17:07 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 11:12:16 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		i;
	int		is_negative;
	long	result;

	i = 0;
	is_negative = 0;
	if (!str[i])
		return (0);
	while (str[i] != '+' && str[i] != '-' && !(str[i] >= '0' && str[i] <= '9'))
		i++;
	if (str[i] == '-')
		is_negative = 1;
	while (!(str[i] >= '0' && str[i] <= '9'))
		i++;
	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		result = result * 10 + (str[i++] - '0');
	if (is_negative == 1)
		result = -result;
	return (result);
}
