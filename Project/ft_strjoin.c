/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:05:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/29 00:20:45 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new string, which is the result 
 * of the concatenation of ’s1’ and ’s2’. */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_str;
	unsigned int	i;
	unsigned int	s1_len;
	unsigned int	s2_len;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (i < s1_len)
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_len)
	{
		new_str[s1_len + i] = s2[i];
		i++;
	}
	new_str[s1_len + i] = '\0';
	return (new_str);
}
