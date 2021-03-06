/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_studies.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalves-p <dalves-p@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:13:52 by dalves-p          #+#    #+#             */
/*   Updated: 2021/07/05 11:55:07 by dalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// Functions to change color of console print

void	red(void)
{
	printf("\033[1;31m");
}

void	yellow(void)
{
	printf("\e[0;93m");
}

void	cyan(void)
{
	printf("\e[0;36m");
}

void	purple(void)
{
	printf("\e[0;35m");
}
	
void	blue(void)
{
	printf("\e[0;34m");
}

void	green(void)
{
	printf("\e[0;32m");
}
void	reset(void)
{
	printf("\033[0m");
}

int	main(void)
{
	printf("\n");
	cyan();
	printf("----------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------PRINTF FLAG TEST------------------------------------------\n");
	printf("----------------------------------------------------------------------------------------------------\n");
	printf("\n");
	printf("\n");
	printf("---------------------------------------------character----------------------------------------------\n");
	reset();
	printf("\n");
	printf("%-60s: |%c|","format identifier", 'x');
	printf("\n");
	printf("%-60s: |%2c|", "with minimum field (2) width", 'x');
	printf("\n");
	printf("%-60s: |%-20c|", "minimum field (20) left align", 'x');
	printf("\n");
	printf("%-60s: |%*c|", "minimum (10) field (*) right align", 10, 'x');
	printf("\n");
	printf("\n");
	cyan();
	printf("----------------------------------------------string--------------------------------------------------\n");
	reset();
	printf("\n");
	printf("%-60s: |%s|","format identifier", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%20s|", "with minimum field (20) width", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-20s|", "minimum field (20) left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-*s|", "minimum field (20) left align using *", 20, "quarenta e dois");
	printf("\n");
	printf("%-60s: |%.8s|", "precision (8) field", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-.8s|", "precision (8) field left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%20.8s|", "minimum (20) and precision (8) field", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-20.8s|", "minimum (20) and precision (8) field left align", "quarenta e dois");
	printf("\n");
	printf("%-60s: |%-*.*s|", "minimum (20) and precision (8) using *, field left align", 20, 8, "quarenta e dois");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("---------------------------------------------pointer----------------------------------------------------\n");
	reset();
	printf("\n");
	
	int *pointer;
	int num;
	
	num = 42;
	pointer = &num;
	printf("%-60s: |%p|","format identifier", pointer);
	printf("\n");
	printf("%-60s: |%20p|", "with minimum field (20) width", pointer);
	printf("\n");
	printf("%-60s: |%-20p|", "minimum field (20) left align", pointer);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("----------------------------------------decimal_signed_integer---------------------------------------------\n");
	reset();
	printf("\n");
	int hex_neg = -0x2a;
	
	printf("%-60s: |%d|","format identifier", -42);
	printf("\n");
	printf("%-60s: |%d|","(hex) format identifier", hex_neg);
	printf("\n");
	printf("%-60s: |%-3d|", "with minimum field (3) width", -42);
	printf("\n");
	printf("%-60s: |%5d|", "with minimum field (5) width", -42);
	printf("\n");
	printf("%-60s: |%05d|", "with minimum field (5) width and 0 padding", -42);
	printf("\n");
	printf("%-60s: |%5.3d|", "minimum field (5) width with precision (3)", -42);
	printf("\n");
	printf("%-60s: |%-5d|", "minimum field (5) left align", -42);
	printf("\n");
	printf("%-60s: |%5.1d|", "precision (1) and minimum (5) field", -42);
	printf("\n");
	printf("%-60s: |%.3d|", "precision (3) field", hex_neg);
	printf("\n");
	printf("%-60s: |%-.5d|", "precision (5) field left align", hex_neg);
	printf("\n");
	printf("%-60s: |%10.5d|", "minimum (10) and precision (5) field", -42);
	printf("\n");
	printf("%-60s: |%-10.5d|", "minimum (10) and precision (5) field left align", -42);
	printf("\n");
	printf("%-60s: |%-*.*d|", "minimum (20) and precision (1) field left align", 20, 1, hex_neg);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("-----------------------------------------------integer--------------------------------------------------------\n");
	reset();
	printf("\n");
	printf("%-60s: |%i|","format identifier", -42);
	printf("\n");
	printf("%-60s: |%20i|", "with minimum field (20) width", -42);
	printf("\n");
	printf("%-60s: |%020i|", "minimum field (20) width with 0's", -42);
	printf("\n");
	printf("%-60s: |%-20i|", "minimum field (20) left align", -42);
	printf("\n");
	printf("%-60s: |%20.1i|", "precision (1) and minimum (20) field", -42);
	printf("\n");
	printf("%-60s: |%.1i|", "precision (1) field", -42);
	printf("\n");
	printf("%-60s: |%-.1i|", "(hex_neg) precision (1) field left align", hex_neg);
	printf("\n");
	printf("%-60s: |%020.10i|", "minimum (20) and precision (10) field", -12345678);
	printf("\n");
	printf("%-60s: |%-20.10i|", "minimum (20) and precision (10) field left align", -12345678);
	printf("\n");
	printf("%-60s: |%-*.*i|", "(hex_neg) minimum (20) and precision (1) field left align", 20, 1, hex_neg);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("-------------------------------------------unsigned_integer------------------------------------------------------\n");
	reset();
	printf("\n");
	red();
	printf("%-60s: |%u|","negative input", -42);
	reset();
	printf("\n");
	printf("%-60s: |%u|","format identifier", 42);
	printf("\n");
	printf("%-60s: |%20u|", "with minimum field (20) width", 42);
	printf("\n");
	printf("%-60s: |%020u|", "minimum field (20) width with 0's", 42);
	printf("\n");
	printf("%-60s: |%-20u|", "minimum field (20) left align", 42);
	printf("\n");
	printf("%-60s: |%20.1u|", "precision (1) and minimum (20) field", 42);
	printf("\n");
	printf("%-60s: |%.1u|", "precision (1) field", 42);
	printf("\n");
	printf("%-60s: |%-.1u|", "(hex_neg) precision (1) field left align", 42);
	printf("\n");
	printf("%-60s: |%-20.1u|", "minimum (20) and precision (1) field left align", 42);
	printf("\n");
	printf("%-60s: |%-*.*u|", "(hex_neg) minimum (20) and precision (1) field left align", 20, 1, 42);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("---------------------------------------------hex_integer_lowercase----------------------------------------------------\n");
	reset();
	
	int hex = 0x9f4;
	int integer = 42;
	
	printf("\n");
	printf("%-60s: |%x|","(int) format identifier", integer);
	printf("\n");
	printf("%-60s: |%x|","(hex) format identifier", hex);
	printf("\n");
	printf("%-60s: |%20x|", "(int) with minimum field (20) width", integer);
	printf("\n");
	printf("%-60s: |%20x|", "(hex) with minimum field (20) width", hex);
	printf("\n");
	printf("%-60s: |%020x|", "(int) minimum field (20) width with 0's", integer);
	printf("\n");
	printf("%-60s: |%020x|", "(hex) minimum field (20) width with 0's", hex);
	printf("\n");
	printf("%-60s: |%-20x|", "(int) minimum field (20) left align", integer);
	printf("\n");
	printf("%-60s: |%-20x|", "(hex) minimum field (20) left align", hex);
	printf("\n");
	printf("%-60s: |%20.6x|", "precision (6) and minimum (20) field", hex);
	printf("\n");
	printf("%-60s: |%.6x|", "precision (6) field", integer);
	printf("\n");
	printf("%-60s: |%-.6x|", "(hex_neg) precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-20.6x|", "minimum (20) and precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-*.*x|", "(hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("---------------------------------------------hex_integer_uppercase----------------------------------------------------\n");
	reset();
	printf("\n");
	printf("%-60s: |%X|","(int) format identifier", integer);
	printf("\n");
	printf("%-60s: |%X|","(hex) format identifier", hex);
	printf("\n");
	printf("%-60s: |%20X|", "(int) with minimum field (20) width", integer);
	printf("\n");
	printf("%-60s: |%20X|", "(hex) with minimum field (20) width", hex);
	printf("\n");
	printf("%-60s: |%020X|", "(int) minimum field (20) width with 0's", integer);
	printf("\n");
	printf("%-60s: |%020X|", "(hex) minimum field (20) width with 0's", hex);
	printf("\n");
	printf("%-60s: |%-20X|", "(int) minimum field (20) left align", integer);
	printf("\n");
	printf("%-60s: |%-20X|", "(hex) minimum field (20) left align", hex);
	printf("\n");
	printf("%-60s: |%20.6X|", "precision (6) and minimum (20) field", hex);
	printf("\n");
	printf("%-60s: |%.6X|", "precision (6) field", integer);
	printf("\n");
	printf("%-60s: |%-.6X|", "(hex_neg) precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-20.6X|", "minimum (20) and precision (6) field left align", hex);
	printf("\n");
	printf("%-60s: |%-*.*X|", "(hex_neg) minimum (20) and precision (6) field left align", 20, 6, hex);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	cyan();
	printf("--------------------------------------------------------%%---------------------------------------------------------------\n");
	reset();
	printf("|%%|");
	printf("\n");
	printf("|%5%|");
	printf("\n");
	printf("|%0.5%|");
	printf("\n");
	printf("|%-10.4%|");
	printf("\n");
	printf("\n");
	printf("\n");
	return (0);
}
