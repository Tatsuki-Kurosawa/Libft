/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:46:09 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:57:43 by kurosawaits      ###   ########.fr       */
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

// voidポインタ型だと一度に見るべき容量がわからないため、どの容量にも対応できるよう1バイトでみれるcharポインタ型を利用.
// 変換を行なってからコピーを行う.
// メモリの位置によりコピーの仕方を変更する.
// どちらかがNULLの場合、segfaが起きる