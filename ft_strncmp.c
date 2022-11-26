/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 07:29:42 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:01:49 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			return (0);
		else if (*(s1 + i) != *(s2 + i))
			return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str_1[20] = "abcdef";
// 	char	str_2[20] = "abcdfj";
// 	int		num_1;
// 	int		num_2;

// 	num_1 = strncmp(str_1, str_2, 5);
// 	num_2 = ft_strncmp(str_1, str_2, 5);
// 	printf("strncmp:	%d\n", num_1);
// 	printf("ft_strncmp:	%d\n", num_2);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strncmp.c

// 比較はunsigned char型を使って行われる点に注意