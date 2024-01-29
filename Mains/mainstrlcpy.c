/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/20 20:15:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft/libft.h"

int	main(int argc ,char **argv)
{
	if (argc == 1)
	{
		printf("usage: ./out src dst len");
		return (0);
	}
	char *v = argv[2];
	
	int x = ft_strlcpy(argv[2], argv[1], atoi(argv[3]));
	int y = strlcpy(v, argv[1], atoi(argv[3]));
	printf("My \t-> argv[2]: %s \n", argv[2]);
	printf("Orig \t-> argv[2]: %s \n", v);
	printf("return: %d\n", x);
	printf("return: %d", y);
}
