/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:47:05 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/18 20:41:28 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	print_hexa(va_list *args, t_spec *spec)
{
	unsigned int	u;
	char			*h;
	size_t			len;
	size_t			str_len;

	u = va_arg(*args, unsigned int);
	h = ft_utoa_base(u, "0123456789abcdef");
	str_len = ft_strlen(h);
	len = str_len;
	if (spec->spec == 'X')
		ft_strupcase(h);
	if (spec->precision > len || (spec->dot == 1 && u == 0))
		len = spec->precision;
	if (spec->width > len)
		print_hexa_flags(spec, len, str_len, h);
	else
	{
		if (!(spec->hash == 1 && u == 0))
			print_nbr_prefix_precision(spec, str_len);
		if (!(spec->dot == 1 && spec->precision == 0) || u != 0)
			ft_putstr(h);
		spec->count += len;
	}
	free(h);
}

void	print_ptr(va_list *args, t_spec *spec)
{
	uintptr_t		ads;
	char			*h;
	size_t			len;
	size_t			str_len;

	ads = va_arg(*args, uintptr_t);
	h = ft_uinttoa_base(ads, "0123456789abcdef");
	str_len = ft_strlen(h);
	len = str_len;
	spec->hash = 1;
	len += 2;
	if (spec->precision > len || (spec->dot == 1 && ads == 0))
		len = spec->precision;
	if (spec->width > len)
		print_hexa_flags(spec, len, str_len, h);
	else
	{
		print_nbr_prefix_precision(spec, str_len);
		if (!(spec->dot == 1 && spec->precision == 0) || ads != 0)
			ft_putstr(h);
		spec->count += len;
	}
	free(h);
}
