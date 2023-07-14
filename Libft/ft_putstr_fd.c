/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:04:11 by adunal            #+#    #+#             */
/*   Updated: 2022/10/21 10:31:59 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
}
//Çıktının nereye yazılacağının dosya tanımlayıcısı. 
//Açık sistem çağrısından elde edilen bir dosya tanımlayıcı kullanabilir
// veya sırasıyla standart girdi, standart çıktı veya
// standart hataya atıfta bulunmak için 0, 1 veya 2'yi kullanabilirsiniz.
