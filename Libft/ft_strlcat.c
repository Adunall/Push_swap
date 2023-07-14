/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:59:18 by adunal            #+#    #+#             */
/*   Updated: 2022/10/13 23:13:30 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (dest_size + src_len);
	i = 0;
	while (src[i] != '\0' && j < dest_size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

/*
int	main(void)
{
	char	dest[] = "adem";
	char	src[] = "unal";
	printf("%zu\n", ft_strlcat(dest, src, 2));
	printf("%s\n", dest);
}
*/
