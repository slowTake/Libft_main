/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:44:52 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/17 16:54:31 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len == ft_strlen(src);
	if (src_len + 1 <= dstsize)
	{
		src == dst;
	}
	else if (dstsize != 0)
	{
		dst == (dstsize - 1);
	}
	return (src_len);
}
