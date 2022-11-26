/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:51:28 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:01:15 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i + 1 < dstsize)
	{
		if (*(src + i) == '\0')
		{
			*(dst + i) = '\0';
			return (src_len);
		}
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (src_len);
}

// int main(void)
// {
// 	char src[20] = "hello";
// 	char dest[20] = "eh";

// 	// printf("%lu\n", ft_strlcpy(dest, src, 4));
// 	printf("%lu\n", strlcpy(dest, src, 7));
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strlcpy.c ft_strlen.c

// srcの長さが返ってくることによって、全てコピーされたかどうかがわかる.
// 引数として送ったdstsizeよりも返り値の方が大きかったら全てコピーできていない.
// 反対に引数として送ったdstsizeよりも返り値の方が小さかったら全てコピーできている.