/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:58:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/29 01:03:45 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/ft_strtrim.c"

int main(int argc, char **argv)
{
	//char v[40] = "";
	//char set[9] = "abcdef./";

	(void) argc;
	char *new;
	new = ft_strtrim(argv[1], argv[2]);
	printf("%s", new);
	return (0);
}

