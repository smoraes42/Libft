/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:57:22 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/28 16:32:22 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc ,char **argv)
{
	int		amount;
	char	**v;

	if (argc != 3)
	{
		printf("Usage: ./a.out string charDelimiter");
		return(0);
	}
	v = ft_split(argv[1], argv[2][0]);
	amount = (sizeof(v) / sizeof(char *));
	for (int i = 0; i < 10; i++)
	{
		printf("v[1][]:%s\n", v[i]);
	}
	return (0);
} 
