/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:55:31 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:21:50 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i <= 127; i++)
// 	{
// 		printf("isalnum: i: 	%d '%c' _ %d\n", i, i, isalpha(i));
// 		printf("ft_isalnum: i: 	%d '%c' _ %d\n", i, i, ft_isalpha(i));
// 	}
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_isalpha.c