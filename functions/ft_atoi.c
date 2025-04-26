/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnurmi <pnurmi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:12:38 by pnurmi            #+#    #+#             */
/*   Updated: 2025/04/24 15:40:43 by pnurmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
		if (str[i] == '+' || str[i] == '-')
		{
			sign = (str[i] == '-');
			i++;
		}
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
static int	ft_isspace(int c)
{
	if (c == "32")
		return (1);
	return (0);
}