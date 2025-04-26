/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:45:09 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/24 09:51:35 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && i < len)
	{
		if (needle[j] == haystack[i] && j < len)
		{
			j++;
			i++;
			if (needle[j] == len)
				return (haystack[i - j]);
		}
		if (haystack[i])
		{
			j = 0;
		}
	}
}
