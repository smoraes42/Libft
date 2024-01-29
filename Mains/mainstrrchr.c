/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:55:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 14:11:03 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{	printf("Usage: ./a.out string t");
		return (0);
	}
	char *ft, *str;

	char t = '\0';

	str = strrchr(argv[1], t);
	ft = ft_strrchr(argv[1], t);

	printf("str: %s\nft:%s", str, ft);
	return (0);
}
