/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:43:17 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 17:38:55 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "../Project/libft.h"

//int main (int argc, char **argv)
//{
//	if (argc != 2)
//	{
//		printf("Usage: ./a.out number");
//		return (0);
//	}
//	char *s;
//	s = ft_itoa(ft_atoi(argv[1]));
//	printf("%s\n", s);
//	return (0);
//}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%s", ft_itoa(ft_atoi(av[1])));
	printf("%c", '\n');
}
