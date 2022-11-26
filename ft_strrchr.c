/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:17:52 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:41:51 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	char	*ptr;

	s_len = ft_strlen(s);
	ptr = (char *)s;
	if (c == '\0')
		return (ptr + s_len);
	while (s_len--)
	{
		if (*(ptr + s_len) == (char)c)
			return (ptr + s_len);
	}
	return (NULL);
}

// int main(void)
// {
//     char test[20] = "yuyguy";

//     printf("strrchr:	%s\n", strrchr(test, 'u'));
//     printf("ft_strrchr:	%s\n", ft_strrchr(test, 'u'));
//     printf("strrchr_ad:	%p\n", strrchr(test, 'u'));
//     printf("ft_strrchr_ad:	%p\n", ft_strrchr(test, 'u'));
//     return (0);
// }
// gcc -Wall -Wextra -Werror ft_strrchr.c ft_strlen.c