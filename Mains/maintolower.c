/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/19 21:29:55 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft/libft.h"

int main(void)
{
	char cadena[] = "09099-=-ESTO ES una CADENA";
	printf("str: %s\n", cadena);
	int i;

	printf("my: \n");
	for(i = 0; cadena[i]; i++)
		cadena[i] = tolower(cadena[i]);

	printf("%s\n", cadena);

	printf("org: \n");
	for(i = 0; cadena[i]; i++)
		cadena[i] = ft_tolower(cadena[i]);

	printf("%s\n", cadena);
	return (0);
}
