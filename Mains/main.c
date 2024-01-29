/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/21 17:57:34 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft/libft.h"

int	main(int argc ,char **argv)
{	char *v;

	if (argc != 4)
	printf("Usage ./a.out str start len\n");
	v = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
	printf("%s\n", v);
	return (0);

}
