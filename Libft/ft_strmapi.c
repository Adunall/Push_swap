/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:18:02 by adunal            #+#    #+#             */
/*   Updated: 2022/10/21 08:35:32 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// s stringinin her bir elemanına ft_func fonksiyonunu uygular
//Mesela ft_func harf büyütme olsun
//char *s = "adem" -->> ft_strmapi(s, harf büyütme func) -->> news = "ADEM"
//Parametre olarak içine bir fonksiyonun adresini alıyor
//adresi almasının nedeni fonksiyonu kullanabilmek için RAM deki yeri lazım
//fonksiyon üzerinde işlem yapabilmek için adresine ihtiyacı var

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*yeni;

	i = 0;
	if (!s || !f)
		return (0);
	yeni = (char *)malloc(ft_strlen(s) + 1);
	if (!yeni)
		return (0);
	while (s[i] != '\0')
	{
		yeni[i] = (*f)(i, s[i]);
		i++;
	}
	yeni[i] = '\0';
	return (yeni);
}
/*
char	ft_printf(unsigned int i,char c)
{
	c = c - 32;
	return (c);
}
int	main()
{
	char y[] = "adem";
	printf("%s",ft_strmapi(y, &ft_printf));
}
*/
