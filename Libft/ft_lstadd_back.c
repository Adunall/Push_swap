/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:39:11 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 11:24:21 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//İlk parametre t_list tipinde tanımlanan bir dizinin ilk elemanını simgeler
//Yani ilk elemanın pointerının adresi demek
//İkinci parametre dizinin sonuna yeni bir dizi ekler

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
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
	new_list->content = "adem";
	new_list2->content = "burhan";
	new_list3->content = "yahya";
	first_node->content = "yap";
	second_node->content = "et";
	ft_lstadd_back(&first_node, new_list3);
	printf("%d", ft_lstsize(first_node));
}*/
