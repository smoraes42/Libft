/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/19 20:23:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft/libft.h"

int main(void)
{
	char cadena[] = ";	000000sddddR(h&R1/";
	int i;

	char c = 'b';

	if (ft_isalpha(c))
		printf("podifiasudufiuaisodufioasd");

	printf("str:%s\n", cadena);
	for (i = 0; cadena[i]; i++)
	{
		printf("My ->\t\tchar:%c, ft_isalpha %d\n", cadena[i], ft_isalpha(cadena[i]));
		printf("Oring ->\tchar:%c, isalpha %d\n\n", cadena[i], isalpha(cadena[i]));
	}
	return (0);
}
