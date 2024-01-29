/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 05:13:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/29 00:16:44 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined.
 * Applications which dst and src might overlap should use ft_memmove instead
 *
 *void	*ft_memcpy(void *dst, const void *src, size_t n)
 * {
 * 	unsigned char		*dstr;
 * 	const unsigned char	*sstr;
 * 
 * 	dstr = dst;
 * 	sstr = src;
 * 	if (dst == NULL && src == NULL) 
 * 		return (NULL);
 * 	//else if (src == NULL)
 * 	//	return (dst);
 * 	//else
 * 	//{
 * 		while (n--)
 * 			*dstr++ = *sstr++;
 * 	//}
 * 	return (dst);
 * }
 *
 * */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstr;
	const unsigned char	*sstr;

	dstr = dst;
	sstr = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*dstr++ = *sstr++;
	return (dst);
}
