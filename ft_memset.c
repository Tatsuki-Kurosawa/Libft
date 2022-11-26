/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:28:19 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:26:52 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (len == 0)
		return (s);
	else
	{
		while (len)
		{
			*str = (unsigned char)c;
			str++;
			len--;
		}
		return (s);
	}
}

// int main(void)
// {
//     char buf[] = "ABCDEFGHIJK";
//     memset(buf, '1', 5);
//     // ft_memset(buf, '1', 5);
//     printf("buf文字列→%s\n",buf);
//     return (0);
// }
// gcc -Wall -Wextra -Werror ft_memset.c