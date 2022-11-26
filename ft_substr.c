/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:30:33 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:02:51 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*return_ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	return_ptr = (char *)malloc(len + 1);
	if (!return_ptr)
		return (NULL);
	i = 0;
	while (i < len && *(s + start + i))
	{
		*(return_ptr + i) = *(s + start + i);
		i++;
	}
	*(return_ptr + i) = '\0';
	return (return_ptr);
}

// int	main(void)
// {
// 	printf("%s\n", ft_substr("abcdefg", 2, 3));
// }
// gcc -Wall -Wextra -Werror ft_substr.c ft_strlen.c ft_strdup.c

// メモリは必要容量を確保しなくてはならないため、2つのケースで確保する容量を変える.
// 第一引数sの文字数が100、startが0、lenが10000の場合、len分とっても構わないが
// 必要以上に容量を確保しなくてはならないためstrlen(start)-start分とる.（普通の引き算）
// 第一引数sの文字数が100、startが0、lenが10の場合は、len分とることは適正な量のメモリを確保していることになるためよろし.