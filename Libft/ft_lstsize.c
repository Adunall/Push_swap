/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:58:35 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 01:19:51 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Listedeki eleman sayısını bulur.
//lst şu an bir adres tutuyo. lst'nin nextini lst ye atayınca
//lst artık lst nin next elemanının adresini tutuyoR.

int	ft_lstsize(t_list *lst)
{
	size_t	n;

	n = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*lst1;
	t_list	*lst2;

	lst = ft_lstnew("adem");
	lst1 = ft_lstnew("burhan");
	lst2 = ft_lstnew("yahya");

	lst -> next = lst1;
	lst1 -> next = lst2;
	lst2 -> next = NULL;

	printf("%d", ft_lstsize(lst));
}
*/