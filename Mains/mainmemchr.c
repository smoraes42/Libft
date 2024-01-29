/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:23:50 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/26 17:58:18 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	char *v;
	char * b;

	if (argc != 4)
	{
		printf("Usage: ./a.out string char n");
		return (0);
	}
	v = ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
	b = memchr(argv[1], argv[2][0], atoi(argv[3])); 
	printf("ft_: %s\n", v);
	printf("memchr: %s\n", b);
	return (0);
}
