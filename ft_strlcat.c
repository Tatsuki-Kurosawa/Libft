/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:47:46 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:01:02 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize)
{
	size_t		dst_len;
	size_t		count;
	const char	*c_src;

	if (!dst && src && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen((const char *)dst);
	if (dstsize < dst_len)
		return (dstsize + ft_strlen(src));
	c_src = src;
	count = 0;
	dst += dst_len;
	while (dstsize > dst_len + count + 1)
	{
		if (*src == '\0')
		{
			*dst = '\0';
			return (dst_len + count);
		}
		*dst++ = *src++;
		count++;
	}
	*dst = '\0';
	return (dst_len + ft_strlen(c_src));
}

// int	main(void)
// {
// 	size_t	num;
// 	char	str_1[20] = "abc";
// 	char	str_2[20] = "def";

// 	num = strlcat(str_1, str_2, 7);
// 	// num = ft_strlcat(str_1, str_2, 5);
// 	printf("%lu\n", num);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c

// 全てつなげられたかどうかが返り値をみてわかる
// 必ずヌル終端させるのでdstsize-strlen(dst)-1分連結となる
// dstsizeで指定した値より返り値が大きかったら、途中までしか繋げられていない
// → データロスの発生
// dstsizeで指定した値より返り値が小さかったら、全てコピー繋げることができた
// → データロスは発生しない