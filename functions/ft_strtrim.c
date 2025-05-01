/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:59:13 by pnurmi            #+#    #+#             */
/*   Updated: 2025/05/01 13:29:45 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	trimmed = (char *)malloc(j - i + 1);
	if (!trimmed)
		return (NULL);
	k = 0;
	while (i <= j)
		trimmed[k++] = s1[i++];
	return (trimmed);
}
// returns a trimmed s1 or null if mem alloc failed
// removes set from s1
// strchr(set) strchr locates character in string
// find 1st !match of set and from the back
// make sure i and j dont cross while ! i > j