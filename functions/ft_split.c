/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:06:22 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/26 16:00:59 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(const char *s, char c);
static int	word_count(const char *str, char c);
static void	*ft_free(char **strs, int count);
static char	*fill_word(void);

char	**ft_split(const char *s, char c)
{
	// calcuate the length of each word
	// loop over each pointer and fill
}
static int	word_count(const char *str, char c)
{
	size_t	word;
	size_t	i;

	while (str[i])
	{
		if (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			word++;
	}
	return (word);
}

static void	*ft_free(char **strs, int count)
{
	if (strs != NULL)
		free(strs);
}
static char	**str_malloc(const char *s, char c, char **array)
{
	size_t	i;
	size_t	j;
	size_t	word;

	i = 0;
	j = 0;
	word = word_count(s, c);
	while (i < word)
	{
		array = (char *)malloc((word + 1) * sizeof(word));
		// if (array == NULL)
	}
}
// substr