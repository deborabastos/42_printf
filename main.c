/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:31:58 by dalves-p          #+#    #+#             */
/*   Updated: 2021/08/19 15:53:22 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	main(void) 
{
	char	*null_str = NULL;

	printf("---------------- Teste str ----------------\n");
	printf(" | %i\n", printf("Teste teste"));
	printf(" | %i\n", ft_printf("Teste teste"));
	printf("\n");
	
	printf("---------------- Teste %% ----------------\n");
	printf(" | %i\n", printf("%%"));
	printf(" | %i\n", ft_printf("%%"));
	printf(" | %i\n", printf("%5% %-5%"));
	printf(" | %i\n", ft_printf("%5% %-5%"));
	printf("\n");
	printf(" | %i\n", printf("%% Teste teste %% %% "));
	printf(" | %i\n", ft_printf("%% Teste teste %% %% "));
	printf("\n");

	printf("---------------- Teste %%c ----------------\n");
	printf(" | %i\n", printf("%010c", 'p'));
	printf(" | %i\n", ft_printf("%010c", 'p'));
	printf(" | %i\n", printf("%c%10c%c", 'o', 'i', '!'));
	printf(" | %i\n", ft_printf("%c%10c%c", 'o', 'i', '!'));
	printf(" | %i\n", printf("%-0c%3c %-2c", 'o', 'i', '!'));
	printf(" | %i\n", ft_printf("%-0c%3c %-2c", 'o', 'i', '!'));
	printf("\n");

	printf("---------------- Teste %%s ----------------\n");
	printf(" | %i\n", printf("%10s", "teste"));
	printf(" | %i\n", ft_printf("%10s", "teste"));
	printf(" | %i\n", printf("Teste %-10s Teste", "teste"));
	printf(" | %i\n", ft_printf("Teste %-10s Teste", "teste"));
	printf(" | %i\n", printf("T %50.2s Teste", "print string"));
	printf(" | %i\n", ft_printf("T %50.2s Teste", "print string"));
	printf(" | %i\n", printf("T %-50.2s Teste", "print string"));
	printf(" | %i\n", ft_printf("T %-50.2s Teste", "print string"));
	printf(" | %i\n", printf("%10s", null_str));
	printf(" | %i\n", ft_printf("%10s", null_str));
	printf(" | %i\n", printf("%.s", "hi there"));
	printf(" | %i\n", ft_printf("%.s", "hi there"));
	printf(" | %i\n", printf("%.0s", "hi there"));
	printf(" | %i\n", ft_printf("%.0s", "hi there"));
	printf("\n");
	
	printf("---------------- Teste %%i ----------------\n");
	printf(" | %i\n", printf("%-i", INT_MIN));
	printf(" | %i\n", ft_printf("%-i", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%50i", INT_MIN));
	printf(" | %i\n", ft_printf("%50i", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%012i", -2147483647));
	printf(" | %i\n", ft_printf("%012i", -2147483647));
	printf("\n");
	printf(" | %i\n", printf("%i", INT_MIN));
	printf(" | %i\n", ft_printf("%i", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%i", INT_MAX));
	printf(" | %i\n", ft_printf("%i", INT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%i", UINT_MAX));
	printf(" | %i\n", ft_printf("%i", UINT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%030i", (int)-2147483648));
	printf(" | %i\n", ft_printf("%030i", (int)-2147483648));

	printf("---------------- Teste %%d ----------------\n");
	printf(" | %i\n", printf("%d", INT_MIN));
	printf(" | %i\n", ft_printf("%d", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%d", INT_MAX));
	printf(" | %i\n", ft_printf("%d", INT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%d", UINT_MAX));
	printf(" | %i\n", ft_printf("%d", UINT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%50d", 12345));
	printf(" | %i\n", ft_printf("%50d", 12345));
	printf("\n");
	printf(" | %i\n", printf("%050d", 12345));
	printf(" | %i\n", ft_printf("%050d", 12345));
	printf("\n");
	printf(" | %i\n", printf("%-+50d", 12345));
	printf(" | %i\n", ft_printf("%-+50d", 12345));
	printf("\n");
	printf(" | %i\n", printf("%50d", -12345));
	printf(" | %i\n", ft_printf("%50d", -12345));
	printf("\n");
	printf(" | %i\n", printf("%+.7d", 12345));
	printf(" | %i\n", ft_printf("%+.7d", 12345));
	printf("\n");
	printf(" | %i\n", printf("%+.15d", -12345));
	printf(" | %i\n", ft_printf("%+.15d", -12345));
	printf("\n");
	printf(" | %i\n", printf("%- 50d", 12345));
	printf(" | %i\n", ft_printf("%- 50d", 12345));
	printf("\n");
	printf(" | %i\n", printf("%042.20d", 42000));
	printf(" | %i\n", ft_printf("%042.20d", 42000));
	printf("\n");
	printf(" | %i\n", printf("%.0d", 0));
	printf(" | %i\n", ft_printf("%.0d", 0));
	printf("\n");
	printf(" | %i\n", printf("%-.d", 0));
	printf(" | %i\n", ft_printf("%-.d", 0));
	printf("\n");
	printf(" | %i\n", printf("%-15.d", 0));
	printf(" | %i\n", ft_printf("%-15.d", 0));
	printf("\n");
	printf(" | %i\n", printf("%01.0d", 4));
	printf(" | %i\n", ft_printf("%01.0d", 4));
	printf("\n");

	printf("---------------- Teste %%u ----------------\n");
	printf(" | %i\n", printf("%u", INT_MIN));
	printf(" | %i\n", ft_printf("%u", INT_MIN));
	printf("\n");
	printf(" | %i\n", printf("%u", INT_MAX));
	printf(" | %i\n", ft_printf("%u", INT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%u", UINT_MAX));
	printf(" | %i\n", ft_printf("%u", UINT_MAX));
	printf("\n");
	printf(" | %i\n", printf("%u", LONG_MAX));
	printf(" | %i\n", ft_printf("%u", LONG_MAX));
	printf("\n");
	printf(" | %i\n", printf("%u", LONG_MIN));
	printf(" | %i\n", ft_printf("%u", LONG_MIN));
	printf("\n");
	printf(" | %i\n", printf("%u", ULONG_MAX));
	printf(" | %i\n", ft_printf("%u", ULONG_MAX));
	printf("\n");
	printf(" | %i\n", printf("%u", 9223372036854775807LL));
	printf(" | %i\n", ft_printf("%u", 9223372036854775807LL));
	printf("\n");
	printf(" | %i\n", printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf(" | %i\n", ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	printf("\n");
	printf(" | %i\n", printf("%u", (UINT_MAX * -1)));
	printf(" | %i\n", ft_printf("%u", (UINT_MAX * -1)));
	printf("\n");
	printf(" | %i\n", printf("%ld", 4294967295));
	printf(" | %i\n", ft_printf("%u", 4294967295));
	printf("\n");
	printf(" | %i\n", printf("%ld", -4294967295));
	printf(" | %i\n", ft_printf("%u", -4294967295));
	printf("\n");

	printf(" | %i\n", printf("%.0u", (unsigned int)-1));
	printf(" | %i\n", ft_printf("%.0u", (unsigned int)-1));
	printf("\n");
	printf(" | %i\n", printf("%.0uis a big number", (unsigned int)-1));
	printf(" | %i\n", ft_printf("%.0uis a big number", (unsigned int)-1));
	printf("\n");
	printf(" | %i\n", printf("the number is %.0u", (unsigned int)-1));
	printf(" | %i\n", ft_printf("the number is %.0u", (unsigned int)-1));
	printf("\n");
	printf(" | %i\n", printf("the number is %.u", (unsigned int)-1));
	printf(" | %i\n", ft_printf("the number is %.u", (unsigned int)-1));
	printf("\n");
	printf(" | %i\n", printf("%-.u", 0));
	printf(" | %i\n", ft_printf("%-.u", 0));
	printf("\n");
	printf(" | %i\n", printf("%u%.5u%.0u%.u%.9u", 5, 55, 2, 0, 42));
	printf(" | %i\n", ft_printf("%u%.5u%.0u%.u%.9u", 5, 55, 2, 0, 42));
	printf("\n");

	printf("---------------- Teste %%x ----------------\n");
	printf(" | %i\n", printf("%x", 0x12A));
	printf(" | %i\n", ft_printf("%x", 0x12A));
	printf(" | %i\n", printf("%x", 0xA));
	printf(" | %i\n", ft_printf("%x", 0xA));
	printf(" | %i\n", printf("%#x", 100));
	printf(" | %i\n", ft_printf("%#x", 100));
	printf(" | %i\n", printf("%-.x", 0));
	printf(" | %i\n", ft_printf("%-.x", 0));
	printf(" | %i\n", printf("%042.20x", 42000));
	printf(" | %i\n", ft_printf("%042.20x", 42000));
	printf(" | %i\n", printf("%01.3x", 0));
	printf(" | %i\n", ft_printf("%01.3x", 0));
	printf(" | %i\n", printf("%#x", INT_MIN));
	printf(" | %i\n", ft_printf("%#x", INT_MIN));
	printf(" | %i\n", printf("--.%#xp", 0));
	printf(" | %i\n", ft_printf("--.%#xp", 0));
	printf(" | %i\n", printf("%.8x", 0));
	printf(" | %i\n", ft_printf("%.8x", 0));
	printf("\n");

	printf("---------------- Teste %%X ----------------\n");
	printf(" | %i\n", printf("%X", 0x12A));
	printf(" | %i\n", ft_printf("%X", 0x12A));
	printf(" | %i\n", printf("%X", 0xA));
	printf(" | %i\n", ft_printf("%X", 0xA));
	printf(" | %i\n", printf("%X", 100));
	printf(" | %i\n", ft_printf("%X", 100));
	printf(" | %i\n", printf("%X", 2));
	printf(" | %i\n", ft_printf("%X", 2));
	printf(" | %i\n", printf("%X", 16));
	printf(" | %i\n", ft_printf("%X", 16));
	printf(" | %i\n", printf("%X", 41854));
	printf(" | %i\n", ft_printf("%X", 41854));
	printf(" | %i\n", printf("%X", INT_MIN));
	printf(" | %i\n", ft_printf("%X", INT_MIN));
	printf(" | %i\n", printf("%X", INT_MAX));
	printf(" | %i\n", ft_printf("%X", INT_MAX));
	printf("\n");
	
	printf("---------------- Teste %%p ----------------\n");
	printf(" | %i\n", printf("%p", "print string"));
	printf(" | %i\n", ft_printf("%p", "print string"));
	printf(" | %i\n", printf("%p", "address"));
	printf(" | %i\n", ft_printf("%p", "address"));
	printf(" | %i\n", printf("%p", "3"));
	printf(" | %i\n", ft_printf("%p", "3"));
	printf("\n");

	printf("---------------- Teste multi ----------------\n");
	printf(" | %i\n", printf("Six par: %s, %10i, %s, %c, %u, %%", "string", 123, "string", 'q', UINT_MAX));
	printf(" | %i\n", ft_printf("Six par: %s, %10i, %+s, %-c, %u, %%", "string", 123, "string", 'q', UINT_MAX));
	printf("\n");
}
