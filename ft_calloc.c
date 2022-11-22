/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:28:27 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/15 13:17:09 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t eltsize)
{
    void    *ptr;

    if (count && SIZE && (2147483647 / count) < eltsize)
        return (NULL);
    ptr = malloc(count * eltsize);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, count * eltsize);
    return (ptr);
}
/*void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (nmemb > 0 && (size_t) - 1 / nmemb < size)
		return (NULL);
	ret = malloc(size * nmemb);
	if (!(ret))
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}*/
