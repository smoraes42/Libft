/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:06:09 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/24 11:57:23 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: ./a.out integer fd");
		return  (0);
	}
	ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	return  (0);

}
