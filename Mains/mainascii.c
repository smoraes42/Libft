/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/19 20:11:30 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Libft/libft.h"

int main(void)
{
	int my;
	int orig;
	int ind;

	ind = -2;
	while ( ind <= 300)
	{
		my = ft_isascii(ind);
		orig = ft_isascii(ind);
		printf("ind %d: my c:%c d:%d orig c:%c d:%d\n", ind, my, my, orig, orig);

		ind++;
	}

	return (0);
}
