/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:25:36 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 02:55:06 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../Project/libft.h"

int	main(int argc ,char **argv)
{
	if (argc != 2)
	{
		printf("Usage: ./a.out string");
		return (0);
	}
	int	orig = strlen(argv[1]);
	int	mine = ft_strlen(argv[1]);
	//int ftwha = ft_strlen(NULL);
	//int wha = strlen(NULL);

	printf("argv[1]: %s\n", argv[1]);
	printf("strlen -> %d\nft_strlen -> %d\n", orig, mine);
	 //printf("strlen wha -> %d\nft_strlen ftwha -> %d\n", wha, ftwha);
	return (0);
}
