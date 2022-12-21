/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:53:10 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/30 13:59:13 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*send;

	send = (char *)s;
	i = ft_strlen(send);
	while (i >= 0)
	{
		if (send[i] == (char)c)
			return (&send[i]);
		i--;
	}
	return (0);
}
