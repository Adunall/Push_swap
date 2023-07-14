/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:01:37 by adunal            #+#    #+#             */
/*   Updated: 2022/10/21 09:55:15 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
	int	fd ;
	
	fd = 0;
	ft_putchar_fd('x', fd);
}*/
/*int	main()
{
	int	fd = open("dosya.txt", 0_WRONLY | 0_CREAT | O_RDONLY, 777)
	ft_putchar_fd('c', fd);
	printf("%d", fd)
}*/
//Çıktının nereye yazılacağının dosya tanımlayıcısı. 
//Açık sistem çağrısından elde edilen bir dosya tanımlayıcı kullanabilir
// veya sırasıyla standart girdi, standart çıktı veya standart
// hataya atıfta bulunmak için 0, 1 veya 2'yi kullanabilirsiniz.
// fd dediğimiz şey file descriptor oluyor
// 0 = stndart girdi / 1 = standart çıktı/ 2 = standart hata
// 3 ve üzerindeki tüm sayılar içinse oluşturduğum text dosyasına yazar.