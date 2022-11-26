/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:09:53 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:07:22 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		*str = '\0';
		str++;
		n--;
	}
}

// int main(void)
// {
//     char	buf_1[] = "ABCDEFGHIJK";
// 	   char	buf_2[] = "ABCDEFGHIJK";
//     bzero(buf_1+3, 3);
//     for (int i = 0; i < 11; i++)
//         printf("bzero: %c\n",buf_1[i]);
// 	ft_bzero(buf_2+3, 3);
//     for (int i = 0; i < 11; i++)
//         printf("ft_bzero: %c\n",buf_2[i]);
//     return 0;
// }
// gcc -Wall -Wextra -Werror ft_bzero.c