/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 22:57:22 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/09 22:20:44 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(void)
{
	int i = 0;
	char	**v;

	//	if (argc != 3)
	//	{
	//		printf("Usage: ./a.out string charDelimiter");
	//		return(0);
	//	}
	v = ft_split("ajdjfajdfk lkajdlkfjajkfd ljakdkfjasd", ' ');
	while (v[i])
	{
		printf("%s\n", v[i]);
		i++;
	}


 	return (0);
} 
