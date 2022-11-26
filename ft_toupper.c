/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:37:45 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:26:02 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int	i;

// 	i = 96;
// 	while (i <= 123)
// 	{
// 		printf("toupper: %c, ft_toupper: %c\n", toupper(i), ft_toupper(i));
// 		i++;
// 	}
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_toupper.c