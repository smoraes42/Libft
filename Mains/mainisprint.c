/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/19 21:16:49 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft/libft.h"

int main ()
{
	int i, j;
	for (i = j = 0; i <= 256; i++)
	{
		printf("My -> \t\t%d %c, %d, %d\n", j, i, isprint(i), ft_isprint(i));
		printf("Origin ->\t%d %c, %d, %d\n\n", j, i, isprint(i), ft_isprint(i));
	}
	return 0;
}
