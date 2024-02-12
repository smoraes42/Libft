/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 05:33:27 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/12 06:52:57 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	ptr = *lst;
	while (ptr)
	{
		tmp = ptr;
		ptr = ptr->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}

/* 
void ft_lstfree(void *nodep)
{
    t_list *node = nodep;
    free(node->data);
    free(node);
}

int main(void)
{
    t_list *list = NULL;
    ft_lstclear(&list,ft_lstfree);
    return 0;
}
*/
