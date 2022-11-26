/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:05:19 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:58:33 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	chara;

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			write(fd, "-2147483648", ft_strlen("-2147483648"));
			return ;
		}
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 0)
	{
		if (n < 10)
			ft_putchar_fd(n + '0', fd);
		else
		{
			chara = n % 10 + '0';
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(chara, fd);
		}
		return ;
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(10, 1);
// 	printf("\n");
// 	ft_putnbr_fd(-48, 1);
// 	printf("\n");
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_putnbr_fd.c ft_putchar_fd.c ft_strlen.c

// 余りを求めた順に並べると数字の並びが逆になってしまうため、再帰関数を使って前から並べるようにする.