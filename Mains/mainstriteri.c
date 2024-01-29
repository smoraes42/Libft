/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstriteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:58:18 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 03:09:42 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

void ft_putchar(unsigned int fd, char *s)
{
	write(fd, s, 1);
}


int main(int argc ,char **argv)
{
	(void) argc;
	(void) argv;
	char v[] = "123456";
	ft_striteri(v, ft_putchar); 
	return (0);
}
