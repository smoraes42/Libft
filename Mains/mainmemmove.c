/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:51:10 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 21:22:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: ./a.out source dest");
		return (0);
	}

	ft_memmove(argv[2], argv[1], 10);
	memmove(argv[2], argv[1], 5);
	printf("%s\n", argv[2]);
	printf("%s\n", argv[2]);
	return (0);
}
