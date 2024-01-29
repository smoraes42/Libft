/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:41:20 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 15:24:58 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;
	char	*str;

	ch = c;
	str = (char *)s;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == ch)
		{
			return (&str[len]);
		}
		len--;
	}
	return (NULL);
}
