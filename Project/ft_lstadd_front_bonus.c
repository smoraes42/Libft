/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 04:07:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/10 00:31:37 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	int x = 45;
	t_list *stru = ft_lstnew(&x);

	printf("%d\n", *(int *)stru->content);
	printf("%d\n", (int)stru->content);
	printf("%p\n", stru->content);
	printf("%p\n", stru.content);

	return (0);
}
