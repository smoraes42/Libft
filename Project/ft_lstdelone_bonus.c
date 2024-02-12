/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 22:28:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/12 03:31:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
	content = NULL;
	free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

int main() {
	int x = 42;

	t_list *node = ft_lstnew(&x);
	printf("Before del");
	printf("node -> %p\n", node);
	printf("node->content -> %d\n", *(int *)node->content);
	printf("node->next -> %p\n", node->next);
	ft_lstdelone(node, del);
	printf("After del");
	printf("node -> %p\n", node);
	printf("node->content -> %d\n", *(int *)node->content);
	printf("node->next -> %p\n", node->next);

	return 0;
}
