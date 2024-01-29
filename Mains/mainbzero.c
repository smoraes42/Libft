/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainbzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:04:46 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 01:23:50 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	int ind = 0;

	if(argc != 3)
	{
		printf("Usage: ./a.out string n");
		return(0);
	}


	while(argv[1][ind] != '\0')
	{
		printf("before bzero ->%c\n", argv[1][ind]);
		ind++;
	}
	ind = 0;
	bzero(argv[1],ft_atoi(&argv[2][0]));
	while(argv[1][ind] != '\0' )
	{
		printf("after bzero ->%c\n", argv[1][ind]);
		printf("after bzero ->%x\n", argv[1][ind]);
		ind++;
	}
	return (0);
}
