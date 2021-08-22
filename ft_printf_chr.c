/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:47:25 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/19 17:31:50 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	print_chr(va_list *args, t_spec *spec)
{
	char	c;

	if (spec->spec == '%')
		c = '%';
	else
		c = va_arg(*args, int);
	if (spec->width > 1)
	{
		if (spec->minus == 1)
		{
			write (1, &c, 1);
			print_width(spec->width - 1, ' ');
			spec->count += spec->width;
			return ;
		}
		else if (spec->zero == 1)
			print_width(spec->width - 1, '0');
		else
			print_width(spec->width - 1, ' ');
		write (1, &c, 1);
		spec->count += spec->width;
		return ;
	}
	write (1, &c, 1);
	spec->count += 1;
}

void	print_str(va_list *args, t_spec *spec)
{
	char	*str;
	size_t	len;

	str = va_arg(*args, char *);
	len = ft_strlen(str);
	if (!str)
		len = 6;
	if (spec->dot == 1 && spec->precision < len)
		len = spec->precision;
	if (spec->width > len)
		print_str_flags(spec, len, str);
	else
	{
		ft_putnstr(str, len);
		spec->count += len;
	}	
}
