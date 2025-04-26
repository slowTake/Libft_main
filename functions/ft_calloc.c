/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:46:11 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/25 12:01:50 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(count * size);
	if (tmp[i] == '\0')
	{
		return (NULL);
	}
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/* declare a tmp unsigned char pointer */
/* use malloc to allocate count * size in tmp */
/* loop over tmp and set each byte to 0 */
/* return tmp */

// memset instead of malloc
// calloc works like bzero
// intializes memory like malloc and then sets each byte to 0
