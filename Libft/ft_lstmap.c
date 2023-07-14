/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:18:47 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 12:18:15 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*begin;

	if (lst == NULL || f == NULL)
		return (NULL);
	begin = 0;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		ft_lstadd_back(&begin, new);
		lst = lst->next;
	}
	return (begin);
}
/*
void	*f(void	*content)
{
	char	*lst;
	int		i;

	i = 0;
	lst = (char *)content;
	while (lst[i])
	{
		lst[i] = lst[i] - 32;
		i++;
	}
	return (lst);
}

void	del(void *r)
{
	free(r);
}

int	main(void)
{
	t_list	*lst;
	t_list	*lst1;

	lst = ft_lstnew(ft_strdup("adem"));
	lst1 = ft_lstnew(ft_strdup("burhan"));
	lst->next = lst1;
	printf("%s", lst->content);
	printf("%s", lst->next->content);
	ft_lstmap(lst, f, del);
	printf("%s", lst->content);
	printf("%s", lst->next->content);

}
*/
// ’lst’ listesi üzerinde dolaşır ve
//‘f’ fonksiyonunu listenin her elemanına uygular.
//Uygulama sonucunda oluşan yeni elemenlardan yeni bir liste oluşturulur.
//Gerekli olduğu durumlarda ’del’ fonksiyonu kullanılarak
//elemanın ’content’i temizlenebilir.
//yazdırdırğımız fonksiyonu alıp istediği karakteri del leyip sonuna yazdırır.