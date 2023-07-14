/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:48:08 by adunal            #+#    #+#             */
/*   Updated: 2022/11/18 16:20:20 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//İstenilen string kadar mallocta yer ayırıyor, stringi içine koyup return yapar
char	*ft_strdup(const char *s1)
{
	int		i;
	char	*src;
	char	*dest;

	i = 0;
	src = (char *)s1;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "ademunal";
	printf("%s", ft_strdup(str));
}
*/
//ft_strlen(str) + 1 kısmındaki 1 sona koyulacak NULL için..		
