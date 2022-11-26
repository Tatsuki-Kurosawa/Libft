/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:46:29 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:25:47 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	int	i;

// 	i = 64;
// 	while (i <= 91)
// 	{
// 		printf("tolower: %c, ft_tolower: %c\n", tolower(i), ft_tolower(i));
// 		i++;
// 	}
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_tolower.c