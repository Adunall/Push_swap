/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:11:33 by adunal            #+#    #+#             */
/*   Updated: 2022/10/21 09:44:01 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Çakışma olmadan src ve destin aynı dizi üzerinde olması durumunda-
ve source destten büyükse gerçekleşir
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!src && !dest)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, len);
	if (dest > src)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	src [];
	*src = "start";
	printf("%s", ft_memmove(src + 2, src, 3));
}
*/
// (size_t)dest kullanımı dest'in başlangıç indisini (pointer gibi) verir.
// Burada dest'in başlangıç indisinin sayısal değerinden src'ninkini çıkarttık.