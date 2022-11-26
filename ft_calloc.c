/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:20:56 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:52:26 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	if (SIZE_MAX / size < count)
		return (NULL);
	temp = malloc(size * count);
	if (temp == NULL)
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}

// int	main(void)
// {
// 	char 	*ch;
// 	int		i;

//     ch = (char*)calloc(1, 1);
// 	// ch = (char*)ft_calloc(1, 1);
// 	scanf("%s\n", ch);
//     printf("入力した文字は→%s\n",ch);
//     free(ch);
//     return 0;
// }
// gcc -Wall -Wextra -Werror ft_calloc.c ft_bzero.c

// mallocの引数がsize_t型であるため、countとsizeの積がsize_t型の最大値を超えてはならない
// そのため、mallocで確保する前に確認を行なっている