/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:03:12 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:01:29 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}

// int main(void)
// {
//     char *chara;
//     int num;
//     chara = "ABCDE";
//     // num = ft_strlen(chara);
//     num = strlen(chara);
//     printf("%d", num);
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strlen.c

// ヌル文字はカウントしない.