/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:03:59 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:21:59 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     for (int i = 0; i <= 128; i++)
// 	{
//         printf("isascii:	i:%d '%c' _ %d\n", i, i, isascii(i));
//         printf("ft_isascii:	i:%d '%c' _ %d\n", i, i, ft_isascii(i));
// 	}
// }
// gcc -Wall -Wextra -Werror ft_isascii.c