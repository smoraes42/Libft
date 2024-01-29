/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:37:40 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/23 18:33:15 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: ./a.out string char");
		return (0);
	}
	char *ft, *str;
	char t = argv[2][0];

	ft = ft_strchr(argv[1], t);
	str = strchr(argv[1], t);

	printf("ft: %s\nstr: %s", ft, str);
	return (0);
}


