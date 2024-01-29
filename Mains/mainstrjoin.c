/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 02:47:21 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/27 15:38:02 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("Usage: ./a.out string1 string2");
		return(0);
	}
	printf("str1 \t\t-> %s\n", argv[1]);
	printf("str2 \t\t-> %s\n", argv[2]);
	char *v;
	v = ft_strjoin(argv[1], argv[2]);
	printf("arg strjoin \t-> %s\n", v);

	char *v1 = ft_strjoin("", "");
	char *v2 = ft_strjoin("abc", "");
	char *v3 = ft_strjoin("","abc" );
	char *v4 = ft_strjoin("abcd","efghi");

	printf("v1 strjoin \t-> %s\n", v1);
	printf("v2 strjoin \t-> %s\n", v2);
	printf("v3 strjoin \t-> %s\n", v3);
	printf("v4 strjoin \t-> %s\n", v4);

	return (0);
}
