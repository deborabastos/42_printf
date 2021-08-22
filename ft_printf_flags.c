/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 20:05:33 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/19 18:04:29 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	print_width(int w, char fill)
{
	while (w > 0)
	{
		write(1, &fill, 1);
		w--;
	}
}

void	print_str_flags(t_spec *spec, size_t len, char *str)
{
	if (spec->minus == 1)
	{
		ft_putnstr(str, len);
		print_width(spec->width - len, ' ');
		spec->count += spec->width;
		return ;
	}
	else if (spec->zero == 1)
		print_width(spec->width - len, '0');
	else
		print_width(spec->width - len, ' ');
	ft_putnstr(str, len);
	spec->count += spec->width;
}

void	print_nbr_prefix_precision(t_spec *spec, size_t nbr_len)
{
	if (spec->space == 1 && spec->negative == 0)
		write(1, " ", 1);
	else if (spec->plus == 1 && spec->negative == 0)
		write(1, "+", 1);
	else if (spec->negative == 1)
		write(1, "-", 1);
	if (spec->hash == 1 && spec->spec == 'x')
	{
		write(1, "0x", 2);
		spec->count += 2;
	}
	else if (spec->hash == 1 && spec->spec == 'X')
	{
		write(1, "0X", 2);
		spec->count += 2;
	}
	else if (spec->spec == 'p')
		write(1, "0x", 2);
	if (spec->precision > nbr_len)
		print_width((spec->precision - nbr_len), '0');
}

void	print_nbr_flags(t_spec *spec, size_t len, size_t nbr_len,
	long long int i)
{	
	if (spec->minus == 1)
	{
		print_nbr_prefix_precision(spec, nbr_len);
		if (!(spec->dot == 1 && spec->precision == 0))
			ft_putlnbr(i);
		print_width(spec->width - len, ' ');
		spec->count += spec->width;
		return ;
	}
	else if (spec->zero == 1 && spec->dot == 0)
	{
		print_nbr_prefix_precision(spec, nbr_len);
		print_width(spec->width - len, '0');
	}
	else
	{
		print_width(spec->width - len, ' ');
		print_nbr_prefix_precision(spec, nbr_len);
	}
	if (!(spec->dot == 1 && spec->precision == 0))
		ft_putlnbr(i);
	spec->count += spec->width;
}

void	print_hexa_flags(t_spec *spec, size_t len, size_t str_len, char *h)
{
	if (spec->minus == 1)
	{
		print_nbr_prefix_precision(spec, str_len);
		if (!(spec->dot == 1 && spec->precision == 0))
			ft_putnstr(h, len);
		print_width(spec->width - len, ' ');
		spec->count += spec->width;
		return ;
	}
	else if (spec->zero == 1 && spec->dot == 0)
	{
		print_nbr_prefix_precision(spec, str_len);
		print_width(spec->width - len, '0');
	}
	else
	{
		print_width(spec->width - len, ' ');
		print_nbr_prefix_precision(spec, str_len);
	}
	if (!(spec->dot == 1 && spec->precision == 0))
		ft_putnstr(h, len);
	spec->count += spec->width;
}
