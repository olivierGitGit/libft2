/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:41:45 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/30 13:57:48 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab_s;
	size_t			i;

	i = 0;
	tab_s = s;
	while (i < n)
	{
		tab_s[i] = c;
		i++;
	}
	return (s);
}
