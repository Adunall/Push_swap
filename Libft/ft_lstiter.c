/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:13:09 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 09:47:39 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Listenin üzerinde dolanır ve
//‘f’ fonksiyonunu listenin her elemanının içeriğine uygular.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void	*content)
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
}
*/
/*
int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;

	lst1 = ft_lstnew(ft_strdup("adem"));
	lst2 = ft_lstnew(ft_strdup("adem"));
	lst3 = ft_lstnew(ft_strdup("adem"));
	printf("%s", lst1->content);
	ft_lstiter(lst1, f);
	printf("%s", lst1->content);
}
*/
//*f içine tanımladığın fonctıon u tek tek yazdırır.