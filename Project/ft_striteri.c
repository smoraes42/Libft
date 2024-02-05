/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:47:53 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/31 11:23:02 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int i, char *c))
{
	int	ind;

	ind = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[ind] != '\0')
	{
		f((unsigned int)ind, &s[ind]);
		ind++;
	}
}
