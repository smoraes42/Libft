/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainputendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:30:38 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/24 10:32:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: ./a.out string fd");
		return (0);
	}
	ft_putendl_fd(argv[1], atoi(&argv[1][0]));
	return (0);
}
