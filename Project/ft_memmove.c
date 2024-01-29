/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:09:17 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 19:33:22 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memmove() function copies len bytes from string src to string 
 * dst.  The two strings may overlap; the copy is always done 
 * in a non-destructive manner.
 * The memmove() function returns the original value of dst. */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ddst;
	const unsigned char	*ssrc;

	ddst = dst;
	ssrc = src;
	if (!dst && !src)
		return (ddst);
	if (src < dst)
	{
		while (len-- > 0)
			ddst[len] = ssrc[len];
	}
	else
	{
		while (len-- > 0)
			*ddst++ = *ssrc++;
	}
	return (dst);
}
