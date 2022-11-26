/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:03:12 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:02:05 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	count;

	if (!haystack && needle && len == 0)
		return (NULL);
	if (ft_strlen(haystack) < ft_strlen(needle) || len < ft_strlen(needle))
		return (NULL);
	i = 0;
	count = len - ft_strlen(needle);
	while (i <= count)
	{
		if (ft_memcmp(haystack, needle, ft_strlen(needle)) == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	haystack[20] = "abcdef";
// 	char	needle[20] = "cde";
// 	size_t	len;

// 	len = 5;
// 	printf("strnstr:	%s\n", strnstr(haystack, needle, len));
// 	printf("ft_strnstr:	%s\n", ft_strnstr(haystack, needle, len));
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strnstr.c ft_strlen.c ft_memcmp.c

// haystack内にneedleがあるかどうかを判断.
// あったら合ったところのポインタを返す.
// memcmpで処理を行うが、lenで指定した範囲を超えて探してしまう場合がある.
// haystackのバイト数からneedleのバイト数を引いたバイト数分だけ、needleの先頭要素として見ていく