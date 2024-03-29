/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:01:18 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/11 23:32:04 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
ptr.content			//	. direct access member
ptr -> content		//	-> poitner access member
ptr -> *content		//	mal
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
/*
int main(void)
{
	int example_data = 42;
	t_list *new_node = ft_lstnew(&example_data);
	printf("Content of the new node: %d\n", *((int *)new_node->content));
	ft_lstadd_front(
	free(new_node);
	return (0);
}
*/
