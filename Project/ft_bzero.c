/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 04:25:17 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 01:30:01 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Writes n zeroed bytes to the string s. If n is zero, bzero() does nothing */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	ind;
	unsigned char	*str;

	str = s;
	ind = 0;
	while (n > 0)
	{
		str[ind] = '\0';
		ind++;
		n--;
	}
}
