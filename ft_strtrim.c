/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:55:14 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 22:02:35 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*head;
	char const	*tail;
	char		*str;

	if (!s1)
		return (NULL);
	head = s1;
	tail = s1 + ft_strlen(s1) - 1;
	while (*head)
	{
		if (!ft_strchr(set, *head))
			break ;
		head++;
	}
	while (head < tail)
	{
		if (!ft_strchr(set, *tail))
			break ;
		tail--;
	}
	tail++;
	str = ft_substr(head, 0, tail - head);
	return (str);
}

// int	main(void)
// {
// 	char	s1[12] = "1234AAA1212";
// 	char	set[5] = "1234";

// 	printf("ft_strtrim: %s\n", ft_strtrim(s1, set));
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_strtrim.c ft_strchr.c
// ft_strlen.c ft_substr.c ft_strdup.c

// s1からsetにある文字を削ぎ落とす
// setとheadから取ってきた一文字ずつをft_strchrに入れ、setにあればポインタが返り、なければNULLが返る性質を利用
// これを前と後ろから行なっていく