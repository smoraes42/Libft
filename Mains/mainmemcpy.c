/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:51:10 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 21:10:35 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	char v[5];
	char b[5];

	if (argc != 2)
	{
		printf("Usage: ./a.out source");
		return (0);
	}

	ft_memcpy(v, argv[1], ft_strlen(argv[1]));
	memcpy(b, argv[1], strlen(argv[1]));
	printf("%s\n", v);
	printf("%s\n", b);
	return (0);
}
