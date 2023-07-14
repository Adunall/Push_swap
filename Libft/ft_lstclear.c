/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:05:43 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 12:37:39 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}
/*
void	del(void *r)
{
	free(r);
}

int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;

	lst = ft_lstnew("adem");
	lst2 = ft_lstnew("burhan");
	lst3 = ft_lstnew("ceyda");
	lst4 = ft_lstnew("yahya");

	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;

	printf("%s\n", lst2->content);
	ft_lstclear(&lst, del);
	printf("%s\n", lst2->content);
	printf("%d", ft_lstsize(lst));
}
*/
//del’ ve free(3) kullanarak elemanı ve ona bağlı olan bütün elemanları siler
//ve hafızadaki yerini temizler.
//Son olarak listenin pointerı NULL’ a ayarlanmalıdır.