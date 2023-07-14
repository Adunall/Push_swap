/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:26:57 by adunal            #+#    #+#             */
/*   Updated: 2022/10/14 17:28:31 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//string üzerinde baştan ve sondan set içindeki harfleri bulur.
//Farklı harf gördüğünde durur.
//s1 = "asdademunalasd" && set = "asd" -->> "ademunal"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
int	main(void)
{
	char	s1[] =  "asdademunalasd";
	char	set[] = "asd";
	printf("%s", ft_strtrim(s1, set));
}
*/