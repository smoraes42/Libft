/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:11:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/22 22:08:54 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: ./a.out string");
		return (0);
	}
	char *ftnew;
	char *stnew;

	ftnew = ft_strdup(argv[1]);
	stnew = strdup(argv[1]);

	printf("\nft_strdup: :%s", ftnew);
	printf("\nstrdup: :%s", stnew);

	printf("\nlen ft_nw: %d",ft_strlen(ftnew));
	printf("\nlen ftnew: %d",ft_strlen(stnew));
	 
	return (0);
}
