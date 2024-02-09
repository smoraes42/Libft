/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:44:55 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/09 22:04:36 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(void)
{
	//(void) argc;
	//(void) argv;
//	if (argc != 2)
//	{
//		printf("Usage: ./a.out number");
//		return (0);
//	}

	int x = atoi("2147483649123123213211");
	int y = ft_atoi("2147483649123123213211");

	printf("\natoi\t-> %d", x);
	printf("\nft_atoi\t-> %d", y);
	return (0);
}
