/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:47:05 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/18 21:14:18 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	print_int(va_list *args, t_spec *spec)
{
	long long int	i;
	size_t			len;
	size_t			nbr_len;

	i = va_arg(*args, int);
	if (i < 0)
	{
		spec->negative = 1;
		i = -i;
	}
	nbr_len = ft_count_digit(i);
	len = nbr_len;
	if (spec->precision > len || (spec->dot == 1 && i == 0))
		len = spec->precision;
	if (spec->plus == 1 || spec->space == 1 || spec->negative == 1)
		len++;
	if (spec->width > len)
		print_nbr_flags(spec, len, nbr_len, i);
	else
	{
		print_nbr_prefix_precision(spec, nbr_len);
		if (i > 0 || !(spec->dot == 1 && spec->precision == 0))
			ft_putlnbr(i);
		spec->count += len;
	}
}

void	print_uint(va_list *args, t_spec *spec)
{
	unsigned int	u;
	size_t			len;
	size_t			nbr_len;

	u = va_arg(*args, unsigned int);
	nbr_len = ft_count_digit(u);
	len = nbr_len;
	if (spec->precision > len || (spec->dot == 1 && u == 0))
		len = spec->precision;
	if (spec->plus == 1 || spec->space == 1)
		len++;
	if (spec->width > len)
		print_nbr_flags(spec, len, nbr_len, u);
	else
	{
		print_nbr_prefix_precision(spec, nbr_len);
		if (!(spec->dot == 1 && spec->precision == 0) || u != 0)
			ft_putlnbr(u);
		spec->count += len;
	}
}
