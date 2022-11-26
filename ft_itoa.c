/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 05:18:55 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:23:04 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*divide(int a, int b, size_t c);
static char	*convert(int a, int b, size_t c, char *d);
static char	*min_case(int a, int b, size_t c);

char	*ft_itoa(int n)
{
	int		sign;
	size_t	count;

	count = 0;
	sign = 1;
	if (n == 0)
		count++;
	else if (n == INT_MIN)
		sign = -1;
	else if (n < 0 && n != INT_MIN)
	{
		sign = -1;
		n *= -1;
		count++;
	}
	return (divide(n, sign, count));
}

static char	*divide(int n, int sign, size_t count)
{
	int		sho;
	char	*re_ptr;

	if (n == INT_MIN)
		return (min_case(n, sign, count));
	else if (n == 0)
	{
		re_ptr = (char *)malloc(count + 1);
		if (!re_ptr)
			return (NULL);
		*(re_ptr + 0) = '0';
		*(re_ptr + 1) = '\0';
		return (re_ptr);
	}
	sho = n;
	while (sho > 0)
	{
		sho /= 10;
		count++;
	}
	re_ptr = (char *)malloc(count + 1);
	if (!re_ptr)
		return (NULL);
	return (convert(n, sign, count, re_ptr));
}

static char	*convert(int n, int sign, size_t count, char *re_ptr)
{
	if (n > 0)
	{
		*(re_ptr + count) = '\0';
		count--;
	}
	else if (n < 0)
		n *= -1;
	while (n > 0)
	{
		*(re_ptr + count) = n % 10 + '0';
		n /= 10;
		count--;
	}
	if (sign == -1)
		*(re_ptr + count) = '-';
	return (re_ptr);
}

static char	*min_case(int n, int sign, size_t count)
{
	int		number;
	char	*re_ptr;

	number = n;
	count++;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	re_ptr = (char *)malloc(count + 1);
	if (!re_ptr)
		return (NULL);
	*(re_ptr + count) = '\0';
	count--;
	*(re_ptr + count) = (n % 10) * (-1) + '0';
	count--;
	return (convert(n / 10, sign, count, re_ptr));
}

// int	main(void)
// {
// 	int		number;
// 	char	*re_ptr;

// 	number = INT_MIN;
// 	re_ptr = ft_itoa(number);
// 	printf("ft_itoa: %s\n", re_ptr);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_itoa.c