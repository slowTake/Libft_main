/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:03:32 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/28 15:34:09 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	substring = 0;
	i = 0;
	if (!s)
		return (NULL);
	else
		substring = (char *)malloc(ft_strlen(s));
	if (substring == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (NULL);
	}
	while (s[i] < (start + len))
	{
		if ((start + len) > ft_strlen(s))
		{
			substring[i++] = s[start++];
		}
		return (substring);
	}
}
// start has to be withing the length of the given string (s)
// start + len < full length
// if start is bigger than len then return (strdup(""))