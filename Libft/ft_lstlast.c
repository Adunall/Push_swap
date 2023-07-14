/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:47:48 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 11:56:55 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main()
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	lst = ft_lstnew("Ali");
	lst2 = ft_lstnew("Ata");
	lst3 = ft_lstnew("Bindi");
	lst->next = lst2;
	lst->next->next = lst3;
	printf("%s", ft_lstlast(lst)->content);
}
*/
//malloc fonksiyonuyla RAM de bir yer ayırıyorsun ve bunu adem pointer adresinin
//içine yazıyoruz.
//adem pointerının gösterdiği yere gidip mallocla açılan yerin content kısmına
//"isim" yazar
/*
int	main(void)
{
	t_list	*adem;
	t_list	*unal;
	t_list	*ozdemir;

	adem = (t_list *)malloc(sizeof(t_list));
	unal = (t_list *)malloc(sizeof(t_list));
	ozdemir = (t_list *)malloc(sizeof(t_list));
	adem->content = "isim";
	unal->content = "soyisim";
	ozdemir->content = "soyisim2";
	adem->next = unal;
	unal->next = ozdemir;
	ozdemir->next = NULL;
	//printf("%s", (char *)(adem->next->next->content));
	printf("%s", (char *)(ft_lstlast(adem)->content));
}
*/
/*
int main(void)
{
    t_list  *lst;
    t_list  *lst1;
    t_list  *lst2;
    lst = ft_lstnew("yahya");
    lst1 = ft_lstnew("42");
    lst2 = ft_lstnew("kou");
    lst->next = lst1;
    lst1->next = lst2;
    printf("%s", ft_lstlast(lst)->content);
}*/