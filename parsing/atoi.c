/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:15:33 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/03 19:15:19 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parsing.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
