/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:23:29 by adunal            #+#    #+#             */
/*   Updated: 2022/11/18 14:42:14 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//disaridan alinan *src nin ilk n elemanini
//disaridan alinan *dest e atama islemi
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str1;

	i = 0;
	str = (char *)dst;
	str1 = (char *)src;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	dst = (void *)str;
	return (dst);
}
/*
int	main(void)
{
	char	c[] = "adem";
	char	s[] = "burhan";
	printf("%s", ft_memcpy(c, s, 3));

}
*/
