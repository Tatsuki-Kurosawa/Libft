/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:38:34 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:57:13 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str_dest;
	char	*str_src;

	if (!dest && !src)
		return (NULL);
	str_dest = (char *)dest;
	str_src = (char *)src;
	while (n != 0)
	{
		*str_dest = *str_src;
		str_dest++;
		str_src++;
		n--;
	}
	return ((void *)dest);
}

// int	main(void)
// {
// 	char	src[20] = "12345";
// 	char	dst_1[20] = "abcdjefk";
// 	char	dst_2[20] = "abcdjefk";
// 	size_t	len;

// 	len = strlen(dst_1);
// 	printf("dst_1: %s\n", dst_1);
// 	memcpy(dst_1, src, len);
// 	printf("memcpy: %s\n",dst_1);
// 	len = strlen(dst_2);
// 	printf("dst_2: %s\n", dst_2);
// 	ft_memcpy(dst_2, src, len);
// 	printf("ft_memcpy: %s\n",dst_2);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_memcpy.c

// voidポインタ型だと一度に見るべき容量がわからないため、どの容量にも対応できるよう1バイトでみれるcharポインタ型を利用.
// 変換を行なってからコピーを行う.
// メモリが被った時の動作は未定義なので、引数にrestrictの修飾子あり.
// srcとdstの容量は同じでなくてはならないのか
// どちらかがNULLの時はsegfaが起きる