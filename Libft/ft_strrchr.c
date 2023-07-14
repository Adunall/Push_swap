/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:49:52 by adunal            #+#    #+#             */
/*   Updated: 2022/11/21 17:50:40 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//String içinde char değerini arıyor
//Bulduğu son char dan sonrasını yazdırıyor

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	s[] = "tzripot";
	int	c = 'z';
	printf("%s\n", ft_strrchr(s, c));
}
*/