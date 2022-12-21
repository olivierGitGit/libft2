/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olcoste <olcoste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:27:27 by olcoste           #+#    #+#             */
/*   Updated: 2022/11/30 13:59:46 by olcoste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_tab(char **str, int i)
{
	int	x;

	x = 0;
	while (i > x)
	{
		free (str[x]);
		x++;
	}
	free (str);
	return (NULL);
}

static int	ft_wordsep(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

static char	*ft_strcpy(const char *s, int c)
{
	int		x;
	char	*word;

	x = 0;
	while (s[x] != c && s[x])
		x++;
	word = malloc(sizeof(char) * (x + 1));
	if (!(word))
		return (NULL);
	x = 0;
	while (s[x] != c && s[x])
	{
		word[x] = s[x];
		x++;
	}
	word[x] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		col;
	char	**ret;

	i = 0;
	col = 0;
	ret = malloc(sizeof(char *) * (ft_wordsep(s, c) + 1));
	if (!(ret))
		return (NULL);
	while (s[i] && col < ft_wordsep(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			ret[col] = ft_strcpy(&s[i], c);
		if (ret == NULL)
			return (free_tab(ret, col));
		while (s[i] != c && s[i])
			i++;
		col++;
	}
	ret[col] = NULL;
	return (ret);
}
