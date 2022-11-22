/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:26:07 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/21 17:24:21 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_filltab(unsigned int nb, int l, int s)
{
	char	*number;

	number = ft_calloc(sizeof(char), l + 1);
	if (!number)
		return (NULL);
	if (s < 0)
		number[0] = '-';
	while (nb)
	{
		number[--l] = nb % 10 + '0';
		nb = nb / 10 ;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	int long	nb;
	int			s;
	int			l;

	s = 1;
	l = 1;
	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
	{
		s = -s;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb /= 10;
		l++;
	}
	return (ft_filltab(n * s, l + (s < 0), s));
}
