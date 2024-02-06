/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:47:00 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/06 17:48:05 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_uint_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_put_uint_fd((n / 10),fd);
	}
	ft_putchar_fd(((n % 10) + '0'), fd);
}
