/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:59:43 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/18 10:15:50 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

void	get_format(va_list *args, t_spec *spec)
{
	if (spec->spec == '%' || spec->spec == 'c')
		print_chr(args, spec);
	else if (spec->spec == 's')
		print_str(args, spec);
	else if (spec->spec == 'i' || spec->spec == 'd')
		print_int(args, spec);
	else if (spec->spec == 'x' || spec->spec == 'X')
		print_hexa(args, spec);
	else if (spec->spec == 'u')
		print_uint(args, spec);
	else if (spec->spec == 'p')
		print_ptr(args, spec);
}

void	check_flags(t_spec *spec)
{
	if (spec->zero && spec->minus)
		spec->zero = 0;
	if ((spec->spec == 'd' || spec->spec == 'i') && (spec->zero && spec->dot))
		spec->zero = 0;
}

void	fill_struct(t_spec *spec, char *var)
{
	if (*var == '-')
		spec->minus = 1;
	else if (*var == '0')
		spec->zero = 1;
	else if (*var == '#')
		spec->hash = 1;
	else if (*var == ' ')
		spec->space = 1;
	else if (*var == '+')
		spec->plus = 1;
}

char	*get_flags(t_spec *spec, char *var)
{
	while (*var != '\0')
	{
		if (*var == ' ' || *var == '0' || *var == '-' || *var == '+'
			|| *var == '#')
		{
			fill_struct(spec, var);
			var++;
		}
		else if (*var == '.')
		{
			spec->dot = 1;
			var++;
			spec->precision = ft_atoi(var);
			while (ft_isdigit(*var))
				var++;
		}
		else if (*var >= '1' && *var <= '9')
		{
			spec->width = ft_atoi(var);
			while (ft_isdigit(*var))
				var++;
		}
	}
	return (var);
}

void	get_spec(t_spec *spec, va_list *args, char *var)
{	
	char	*var_aux;

	var_aux = var;
	var = get_flags(spec, var);
	check_flags(spec);
	var = var_aux;
	free(var);
	get_format(args, spec);
}
