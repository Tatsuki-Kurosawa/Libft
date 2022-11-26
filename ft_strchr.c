/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:13:43 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:30:49 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (NULL);
}

// int	main(void)
// {
// 	char	test[20] = "abcdefghijk";
// 	char	*p;

// 	p = strchr(NULL, 'i' + 256);
// 	// p = ft_strchr(test, 'i' + 256);
// 	printf("検索文字が見つかった場所から表示→%s\n", p);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strchr.c