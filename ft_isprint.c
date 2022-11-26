/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:16:54 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:22:26 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     for (int i = 0; i <= 127; i++)
// 	{
//         printf("isprint:	i:%d '%c' _ %d\n", i, i, isprint(i));
//         printf("ft_isprint:	i:%d '%c' _ %d\n", i, i, ft_isprint(i));
// 	}
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_isprint.c