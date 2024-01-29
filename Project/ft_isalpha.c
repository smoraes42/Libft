/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:26:38 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/19 20:21:56 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks wheter a character is an alphabet or not */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
		return (1);
	else
		return (0);
}