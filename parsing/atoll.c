/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:15:30 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:19:44 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parsing.h"

long long	atoll(const char *str)
{
	long long	num;
	int			sign;
	int			i;

	num = 0;
	sign = 1;
	i = 0;
	while (isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}
