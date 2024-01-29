/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 03:31:09 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 03:36:06 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc ,char **argv)
{
	if (argc != 4)
		return (0);

	int x = strncmp(argv[1], argv[2], ft_atoi(argv[3]));
	int y = ft_strncmp(argv[1], argv[2], ft_atoi(argv[3]));

	printf("argv[1]:%s\nargv[2]:%s\n", argv[1], argv[2]);
	printf("strncmp: %d  ft_strcmp:%d", x, y);


	return (0);
}
