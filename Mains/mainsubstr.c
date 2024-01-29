/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsubstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:11:34 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/27 15:04:55 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Usage: ./a.out string index len");
		return (0);
	}
	char *v;
	//char *str = "Ojala no petara...\n";
	//char *crash;
	int arg2 = ft_atoi(argv[2]);
	int arg3 = ft_atoi(argv[3]);

	//crash = ft_substr(NULL, 0, 0);
	v = ft_substr(argv[1], (unsigned int) arg2, (unsigned int)arg3);

	//printf("NULL Check ->");
	//printf("value \033[0;92mstr-> %s\n\033[0m value \033[0;31mcrash-> %s\033[0m\n", str, crash);
	printf("ft_substr: %s\n", v);
	return (0);
	char v2* = ft_substr("hola", 0, 18446744073709551615) ;
	ft_substr("", 0, 1); 
}



hola

lenstr = 4;
start = 0;
len = 192839819283;

