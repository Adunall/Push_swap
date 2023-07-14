/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:10:24 by adunal            #+#    #+#             */
/*   Updated: 2022/11/18 16:11:46 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s1 stringi ve s2 stringinin bytlerını karşılaştırır.
//Aynılarsa 0 değillerse bytelerı arasındaki farkı döndürür.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[] = "adem";
	char	s2[] = "aden";
	size_t		n = 5;
	printf("%d", ft_memcmp(s1, s2, n));
}
*/