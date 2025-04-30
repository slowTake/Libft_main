/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:06:22 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/30 18:06:35 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c);
static void	*ft_free(char **strs, int count);
static char	*fill_word(char *array, size_t word);

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	word;
	char	**array;

	i = 0;
	j = 0;
	word = word_count(s, c);
	while (i < word)
	{
		array = (char *)malloc((word + 1) * sizeof(char *));
		if (array == NULL)
			return (NULL);
		array[count++] = ft_substr(s, c, );
		// calcuate the length of each word
		// loop over each pointer and fill
	}
}
static int	word_count(const char *str, char c)
{
	size_t	word;
	size_t	i;

	while (str[i])
	{
		if (str[i] == c)
		{
			word++;
			while (str[i] == c)
				i++;
		}
		i++;
	}
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	if (strs != NULL)
		free(strs);
}

char	*fill_word(char *array, size_t word)
{
	word = word_count();
	array = (char *)malloc(word);
}
// substr
/* allocate enough room for the word */
/* copy the word into the memory you allocated above */
/* return the allocated word */