/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:46:09 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:26:23 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!len || d == s)
		return (d);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}

// int main(void)
// {
// 	char	dst[20] = "abcdef";
// 	char	src[20] = "ghij";
// 	memmove(dst, src, 3);
//     // ft_memmove(dst, src, 3);
//     printf("コピー後のbuf文字列→%s\n",dst);
//     return (0);
// }
// gcc -Wall -Wextra -Werror ft_memmove.c