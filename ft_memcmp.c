/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:30:08 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 21:25:50 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*con_s1;
	unsigned char	*con_s2;

	con_s1 = (unsigned char *)s1;
	con_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*con_s1 != *con_s2)
			return (*con_s1 - *con_s2);
		con_s1++;
		con_s2++;
	}
	return (0);
}

// int main(void)
// {
//     char *buf_1 = "ABCD5EFGH";
//     char *buf_2 = "ABC123456";

//     if (memcmp(buf_1, buf_2, 5) == 0)
// 		printf("memcmp:	*buf_1 = *buf_2\n");
// 	else
// 		printf("memcmp: *buf_1 != *buf_2\n");
// 	if (ft_memcmp(buf_1, buf_2, 5) == 0)
// 		printf("ft_memcmp: *buf_1 = *buf_2\n");
// 	else
// 		printf("ftmemcmp: *buf_1 != *buf_2\n");
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_memcmp.c