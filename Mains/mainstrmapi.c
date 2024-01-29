/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:41:09 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/25 14:48:49 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Project/libft.h"

//char *ft_putchar(unsigned int ind, char s)
//{
//	write(1, s, 1);
//}
//
//
//int main(int argc ,char **argv)
//{
//	(void) argc;
//	(void) argv;
//	char v[] = "123456";
//	ft_strmapi(v, ft_putchar); 
//	return (0);
//}
char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}

int main()
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return 0;
}

