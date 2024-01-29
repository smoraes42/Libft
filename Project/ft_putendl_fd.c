/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:26:16 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 19:56:37 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		ind;
	char	c;

	ind = 0;
	while (s[ind] != '\0')
	{
		c = s[ind];
		write(fd, &c, 1);
		ind++;
	}
	write(fd, "\n", 1);
}