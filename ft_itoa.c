/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:26:07 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/30 13:57:12 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int l_n)
{
	int	x;

	x = 0;
	if (l_n == 0)
		return (1);
	while (l_n != 0)
	{
		l_n /= 10;
		x++;
	}
	return (x);
}

static char	*ft_swap(char *ret, int i)
{
	int		x;
	char	tmp;

	x = ft_strlen(ret) - 1;
	while (x > i)
	{
		tmp = ret[i];
		ret[i++] = ret[x];
		ret[x--] = tmp;
	}
	return (ret);
}

static char	*ft_itoa_bis(long int l_n, int ngt, char *ret)
{
	int	i;

	i = 0;
	if (ngt == -1)
	{
		ret[0] = '-';
		i++;
	}
	else if (l_n == 0)
	{
		ret [0] = '0';
		i++;
	}
	while (l_n != 0)
	{
		ret[i] = (l_n % 10) + 48;
		l_n /= 10;
		i++;
	}
	ret[i] = '\0';
	if (ret[0] == '-')
		return (ft_swap(ret, 1));
	else
		return (ft_swap(ret, 0));
}

char	*ft_itoa(int n)
{
	int			ngt;
	long int	l_n;
	char		*ret;

	ngt = 1;
	l_n = (long int)n;
	if (l_n < 0)
	{
		ret = malloc(sizeof(char) * ft_count(l_n) + 2);
		if (!(ret))
			return (NULL);
		l_n *= -1;
		ngt = -1;
	}
	else
	{
		ret = malloc(sizeof(char) * ft_count(l_n) + 1);
		if (!(ret))
			return (NULL);
	}
	ret = ft_itoa_bis(l_n, ngt, ret);
	return (ret);
}
