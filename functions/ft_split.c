/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:06:22 by pnurmi            #+#    #+#             */
/*   Updated: 2025/05/01 15:41:56 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(const char *s, char c);
static void		*ft_free(char **s);
static size_t	ft_len(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	words;
	char	**array;

	i = 0;
	words = ft_count(s, c);
	while (i < words)
	{
		array = malloc((words + 1) * (sizeof(char *)));
		if (array == NULL)
			return (NULL);
		while (array[i])
		{
			array[i] = ft_substr(s, c, ft_len(s, c));
			if (!array)
			{
				ft_free(array);
				return (NULL);
			}
			i++;
		}
	}
	array[i] = NULL;
	return (array);
}
static size_t	ft_count(const char *s, char c)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			word++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return (word);
}

static void	*ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static size_t	ft_len(const char *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}
// substr
/* allocate enough room for the word */
/* copy the word into the memory you allocated above */
/* return the allocated word */