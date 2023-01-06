/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:14:59 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/03 19:15:32 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parsing.h"

int	check_int_overflow(char *str)
{
	long long	n;

	n = atoll(str);
	if (n > 2147483647 || n < -2147483648)
		return (1);
	return (0);
}

int	all_numeric(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				if ((argv[i][j] == '+' || argv[i][j] == '-')
				&& !(argv[i][j + 1] && isdigit(argv[i][j + 1])))
					return (0);
			}
			j++;
		}
		if (check_int_overflow(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicates(int argc, char **argv)
{
	int	*nums;
	int	i;
	int	j;
	int	num;
	int	ret;

	nums = malloc(sizeof(int) * argc);
	num = 0;
	i = 1;
	ret = 0;
	while (!ret && i < argc)
	{
		num = ft_atoi(argv[i]);
		j = -1;
		while (++j < i)
		{
			if (j > 0 && nums[j] == num)
				ret = 1;
		}
		nums[i] = num;
		i++;
	}
	free(nums);
	return (ret);
}
