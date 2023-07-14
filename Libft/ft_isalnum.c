/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:34:47 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 14:47:30 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int str)
{
	return (ft_isdigit(str) || ft_isalpha(str));
}
/* if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
	|| (str >= '1' && str <= '9')
	return (1);
	else 
	return (0);*/