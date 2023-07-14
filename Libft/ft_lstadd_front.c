/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:56:04 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 00:10:13 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*new_list;
	t_list	*new_list2;
	t_list	*new_list3;
	t_list	*first_node;
	t_list	*second_node;

	new_list = (t_list *)malloc(sizeof(t_list));
	new_list2 = (t_list *)malloc(sizeof(t_list));
	new_list3 = (t_list *)malloc(sizeof(t_list));
	first_node = (t_list *)malloc(sizeof(t_list));
	second_node = (t_list *)malloc(sizeof(t_list));
	new_list->content = "bir";
	new_list2->content = "iki";
	new_list3->content = "uc";
	first_node->content = "a";
	second_node->content = "b";
	new_list->next = new_list2;
	new_list2->next = new_list3;
	new_list3->next = first_node;
	first_node->next = second_node;
	second_node ->next = NULL;
	ft_lstadd_front(&first_node, new_list);
    printf("%s", new_list->content);
    printf("%s", new_list-> next ->content);
}
*/