/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:45:49 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:21:35 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     for (int i = 0; i <= 127; i++)
// 	{
//         printf("isalnum: 	i:%d, '%c' _ %d\n", i, i, isalnum(i));
//         printf("ft_isalnum: 	i:%d '%c' _ %d\n", i, i, ft_isalnum(i));
// 	}
// }
// gcc -Wall -Wextra -Werror ft_isalnum.c