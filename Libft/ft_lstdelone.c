/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:55:37 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 12:27:53 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))

{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *r)
{
	free(r);
}
*/
/*
void	bastir(t_list *r)
{
	while (r != NULL)
	{
		printf("%s", r->content);
		r = r -> next;
	}
	printf("\n");
}*/
/*
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("adem"));
	printf("%s\n", lst->content);
	ft_lstdelone(lst, del);
	printf("%s\n", lst->content);
	printf("%d", ft_lstsize(lst));
}*/
// Parametre olarak bir eleman alır elemanın
//ve parametre olarak verilen ’del’ fonksiyonunu kullanarak
//’content’ ini ve elemanı free eder. ‘Next’ inin hafızası free edilmemelidir.