/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:08:22 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/18 10:04:14 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	init_struct(t_spec *spec)
{
	spec->negative = 0;
	spec->minus = 0;
	spec->zero = 0;
	spec->hash = 0;
	spec->space = 0;
	spec->plus = 0;
	spec->dot = 0;
	spec->precision = 0;
	spec->width = 0;
}

char	*get_var(char *str, va_list *args, t_spec *spec)
{
	int		i;
	char	*var;

	i = 0;
	init_struct(spec);
	while (str[i] != 'c' && str[i] != 's' && str[i] != 'p' && str[i] != 'd'
		&& str[i] != 'i' && str[i] != 'u' && str[i] != 'x' && str[i] != 'X'
		&& str[i] != '%')
		i++;
	var = ft_substr(str, 0, i);
	spec->spec = str[i];
	get_spec(spec, args, var);
	while (i >= 0)
	{
		str++;
		i--;
	}
	return (str);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	static t_spec	spec;

	va_start(args, str);
	spec.count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			str = get_var((char *)str, &args, &spec);
			if (!str)
				break ;
		}
		else
		{
			write (1, &*str, 1);
			str++;
			spec.count++;
		}
	}
	va_end(args);
	return (spec.count);
}
