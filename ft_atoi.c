/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 06:42:11 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 18:08:36 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_ovunflow(int a, unsigned long b, char c);

int	ft_atoi(const char *str)
{
	char			*rp_str;
	int				sign;
	unsigned long	sum;

	rp_str = (char *)str;
	sign = 1;
	sum = 0;
	while ((9 <= *rp_str && *rp_str <= 13) || *rp_str == 32)
		rp_str++;
	if (*rp_str == '+' || *rp_str == '-')
	{
		if (*rp_str == '-')
			sign = -1;
		rp_str++;
	}
	while (ft_isdigit(*rp_str))
	{
		if (sign == 1 && check_ovunflow(sign, sum, *rp_str))
			return ((int) LONG_MAX);
		if (sign == -1 && check_ovunflow(sign, sum, *rp_str))
			return ((int) LONG_MIN);
		sum = (*rp_str - '0') + sum * 10;
		rp_str++;
	}
	return (sum * sign);
}

static int	check_ovunflow(int sign, unsigned long sum, char c)
{
	unsigned long	tmp;

	tmp = LONG_MAX / 10;
	if (sign == 1)
	{
		if (tmp < sum || (sum == tmp && LONG_MAX % 10 < c - '0'))
			return (1);
	}
	else if (sign == -1)
	{
		if (tmp < sum || (sum == tmp && (LONG_MIN % 10) * (-1) < c - '0'))
			return (1);
	}
	return (0);
}

// int	main(void) {
//     int n;
// 	int	m;
// 	m = atoi("   +2147483647");
// 	n = ft_atoi("   +2147483647");
//     printf("atoi: %d\n", m);
//     printf("ft_atoi: %d\n", n);
//     return 0;
// }
// gcc -Wall -Wextra -Werror ft_atoi.c ft_isdigit.c