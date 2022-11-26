/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:21:36 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:31:14 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	str[10] = "abcdef";
// 	char	*str_ptr;

// 	str_ptr = strdup(str);
// 	// str_ptr = ft_strdup(str);
// 	printf("%p\n", str);
// 	printf("%s\n", str_ptr);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strdup.c ft_strlen.c