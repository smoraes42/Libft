/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:14:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 00:02:47 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	pos;
	int	conv;

	i = 0;
	pos = 1;
	conv = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (0);
		if (str[i] == '-')
			pos *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv *= 10;
		conv += (str[i++] - '0');
	}
	return (conv * pos);
}
