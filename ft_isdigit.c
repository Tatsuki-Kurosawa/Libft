/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:55:56 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:22:16 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (47 < c && c < 58)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i < 255; i++)
// 	{
// 		printf("isdigit:	i:%d '%c'  %d\n", i, i, isdigit(i));
// 		printf("ft_isdigit:	i:%d '%c'  %d\n", i, i, ft_isdigit(i));
// 	}
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_isdigit.c