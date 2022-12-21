/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:47:32 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/30 13:59:08 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*meule, const char *aiguille, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if ((!meule || !aiguille) && len == 0)
		return (NULL);
	if (aiguille[i] == '\0')
		return ((char *)meule);
	while (meule[i] && len != i)
	{
		x = 0;
		while (meule[i + x] == aiguille[x] && len != x + i)
		{
			if (!(aiguille[x + 1]))
				return ((char *)&meule[i]);
			x++;
		}
		i++;
	}
	return (0);
}
