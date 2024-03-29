/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_arg_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:41:55 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:41:57 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	va_arg_num_int(va_list start, int num_arg, int *value)
{
	int		i;
	va_list	start_start;

	va_copy(start_start, start);
	i = 0;
	while (++i < num_arg)
		(void)va_arg(start_start, int);
	*value = va_arg(start_start, int);
	va_end(start_start);
}

void	va_arg_num(va_list start, int num_arg, void **p)
{
	int		i;
	va_list	start_start;

	va_copy(start_start, start);
	i = 0;
	while (++i != num_arg)
		(void)va_arg(start_start, void *);
	*p = va_arg(start_start, void *);
	va_end(start_start);
}

void	va_arg_num_d(va_list start, int num_arg, double *var_d)
{
	int		i;
	va_list	start_start;

	va_copy(start_start, start);
	i = 0;
	while (++i != num_arg)
		(void)va_arg(start_start, double);
	*var_d = va_arg(start_start, double);
	va_end(start_start);
}

void	va_arg_num_dd(va_list start, int num_arg, long double *var_dd)
{
	int		i;
	va_list	start_start;

	va_copy(start_start, start);
	i = 0;
	while (++i != num_arg)
		(void)va_arg(start_start, long double);
	*var_dd = va_arg(start_start, long double);
	va_end(start_start);
}
