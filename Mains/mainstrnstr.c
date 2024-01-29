/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:40:15 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 17:50:38 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	char *ftstr;
	char *strns;
	if(argc != 4)
	{
		printf("./a.out haystack needle len");
		return (0);
	}
	ftstr = ft_strnstr(argv[1], argv[2], ft_atoi(argv[3]));
	strns = strnstr(argv[1], argv[2], ft_atoi(argv[3]));

	printf("ft: %s\n", ftstr);
	printf("strnstr: %s\n", strns);
	return (0);
}
