/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:42:17 by adunal            #+#    #+#             */
/*   Updated: 2022/10/20 22:08:51 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Fonksiyon s stringini yazdırdıkta sonra sona new line atar.
//sondaki 1 bir karakter yazılacak anlamına gelir
//eğer s'nin uzunluğu kadar dersen o kadar yazdırır.
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i++], 1);
	}
	write(fd, "\n", 1);
}
