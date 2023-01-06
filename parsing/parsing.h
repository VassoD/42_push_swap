/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:17:40 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:21:44 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "../includes.h"

int			ft_atoi(const char *str);
long long	atoll(const char *str);
int			check_int_overflow(char *str);
int			all_numeric(int argc, char **argv);
int			has_duplicates(int argc, char **argv);
int			isdigit(int c);
int			isspace(int c);

#endif
