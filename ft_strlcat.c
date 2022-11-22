/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:58:41 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/17 17:01:02 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;

	i = 0;
	dst_l = ft_strlen((const char *)dst);
	if (size == 0 && dst == NULL && src == NULL)
		return (ft_strlen(src));
	else if (size <= ft_strlen(dst))
		return ((ft_strlen(src) + size));
	while (src[i] && i < size - dst_l - 1)
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return ((dst_l + ft_strlen(src)));
}

/*#include <bsd/string.h>
int main(int argc, char *argv[])
{
	char	*dest;

	printf("result %li", ft_strlcat(argv[1], "lorem ipsum dolor sit amet", 5));
	printf("\nvrai result %li", ft_strlcat(argv[1], "lorem ipsum dolor sit amet"
	, 5));
	//printf("ret %li\n\n", ft_strlcat(argv[1], argv[2], 6));
	//printf("modif %s\n %s\n\n", argv[1], argv[3]);
    //printf("ret %li\n\n", strlcat(argv[1], (const char *)argv[2], 6));
	//printf("modif %s", argv[1]);
    return 0;
}*/
