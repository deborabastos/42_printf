/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:10:07 by dalves-p          #+#    #+#             */
/*   Updated: 2021/09/17 16:08:43 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

typedef struct s_spec
{
	int		count;
	int		negative;
	char	spec;
	int		minus;
	int		zero;
	int		hash;
	int		space;
	int		plus;
	int		dot;
	size_t	precision;
	size_t	width;
}				t_spec;

int		ft_printf(const char *str, ...);
char	*get_var(char *str, va_list *args, t_spec *spec);
void	init_struct(t_spec *spec);
void	get_spec(t_spec *spec, va_list *args, char *var);
char	*get_flags(t_spec *spec, char *var);
void	fill_struct(t_spec *spec, char *var);
void	check_flags(t_spec *spec);
void	get_format(va_list *args, t_spec *spec);
void	print_chr(va_list *args, t_spec *spec);
void	print_str(va_list *args, t_spec *spec);
void	print_int(va_list *args, t_spec *spec);
void	print_uint(va_list *args, t_spec *spec);
void	print_hexa(va_list *args, t_spec *spec);
void	print_ptr(va_list *args, t_spec *spec);
void	print_width(int w, char fill);
void	print_prefix(t_spec *spec);
void	print_nbr_prefix_precision(t_spec *spec, size_t len);
void	print_str_flags(t_spec *spec, size_t len, char *str);
void	print_nbr_flags(t_spec *spec, size_t len, size_t nbr_len,
			long long int i);
void	print_hexa_flags(t_spec *spec, size_t len, size_t str_len, char *h);

#endif
