/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/19 20:34:06 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft/libft.h"

int main(void)
{
	char cadena[] = ";000000sddddR(h&R1/";
	int i;
	for (i = 0; cadena[i]; i++)
	{
		printf("My ->\t\tchar:%c, ft_isalnum %d\n", cadena[i], ft_isalnum(cadena[i]));
		printf("Oring ->\tchar:%c, isalnum %d\n\n", cadena[i], isalnum(cadena[i]));
	}
	return (0);
}
