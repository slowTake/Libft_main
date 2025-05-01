/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:48:34 by pnurmi            #+#    #+#             */
/*   Updated: 2025/05/01 19:32:13 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cast;

	cast = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i - 1] == cast)
		{
			return ((char *)&s[i - 1]);
		}
		i--;
	}
	if (i == 0 && s[i] == cast)
		return ((char *)&s[i]);
	return (NULL);
}
