/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:04:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 16:28:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		ind;

	ch = c;
	ind = 0;
	while (s[ind] != '\0')
	{
		if (s[ind] == ch)
			return ((char *)&s[ind]);
		ind++;
	}
	if (s[ind] == ch)
		return ((char *)&s[ind]);
	return (NULL);
}
