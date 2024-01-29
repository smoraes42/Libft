/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:44:55 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 00:04:32 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	//(void) argc;
	//(void) argv;
	if (argc != 2)
	{
		printf("Usage: ./a.out number");
		return (0);
	}

	int x = atoi(argv[1]);
	int y = ft_atoi(argv[1]);

	printf("\natoi\t-> %d", x);
	printf("\nft_atoi\t-> %d", y);
	return (0);
}
