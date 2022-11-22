/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:42:46 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/17 12:57:20 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*send;

	i = 0;
	send = (char *)s;
	if (c == 0)
		return (&send[ft_strlen(send)]);
	else if (c > 255)
		return (send);
	while (send[i])
	{
		if (send[i] == c)
			return (&send[i]);
		i++;
	}
	return (0);
}
