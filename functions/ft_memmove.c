/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:01:16 by pnurmi            #+#    #+#             */
/*   Updated: 2025/05/03 17:13:14 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dst;
	size_t			i;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (len == 0)
		return (dst);
	if (tmp_dst < tmp_src)
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	else
	{
		while (len > 0)
		{
			len--;
			tmp_dst[len] = tmp_src[len];
		}
	}
	return (dst);
}
