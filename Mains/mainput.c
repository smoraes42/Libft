/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainput.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:48:24 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/24 10:03:56 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: ./a.out char fd");
		return (0);
	}
	ft_putchar_fd(argv[1][0], atoi(&argv[1][0]));
	return (0);
}
