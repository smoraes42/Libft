/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:39:22 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 18:25:12 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	int mem;
	int ftm;

	mem = 0;
	if (argc != 4)
	{
		printf("Usage: ./a.out str1 str2 n");
		return (0);
	}
	mem = memcmp(argv[1], argv[2], atoi(argv[3]));
	ftm = ft_memcmp(argv[1], argv[2], ft_atoi(argv[3]));
	printf("mem: %d\n", mem);
	printf("ft_mem: %d\n", ftm);
	return (0);
}
