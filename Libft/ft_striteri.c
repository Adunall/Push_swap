/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:15:40 by adunal            #+#    #+#             */
/*   Updated: 2022/10/20 22:09:52 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s stringinin her bir elemanına ft_func fonksiyonunu uygular
//Mesela ft_func harf büyütme fonk. olsun
//char *s = "adem" -->> ft_strmapi(s, harf büyütme func) -->> s = "ADEM"
//return değeri vermeyen bir fonksiyon işlemi yapıp bırakıyoR.(void'den dolayı)
//Eğer gerekli olursa her karakter adresi ile gönderilmelidir.
//Parametre olarak içine bir fonksiyonun adresini alıyor.
//adresi almasının nedeni fonksiyonu kullanabilmek için RAM deki yeri lazım
//fonksiyon üzerinde işlem yapabilmek için adresine ihtiyacı var.

void	ft_striteri(char *s, void (*ft_ft)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_ft(i, &s[i]);
		i++;
	}
}
/*
void	ft_ft(unsigned int  i, char *s)
{
	int	c;
	c = 0;
	i = 0;
	if (*s)
	{
		s[c] = s[c] - 32;
	}
}
int	main()
{
	char	a[] = "aaaaaa";
	ft_striteri(a, &ft_ft);
	printf("%s", a);
}
*/