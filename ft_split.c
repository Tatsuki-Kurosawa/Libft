/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:20:05 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:28:00 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*check(char const *a, char b, size_t c, size_t d);
static char			*allocate(char *a, char b);
static void			*free_memory(char **a, int b);
static size_t		counter(char const *a, char b);

char	**ft_split(char const *s, char c)
{
	char	**return_value;
	size_t	count;
	size_t	num;

	if (!s)
		return (NULL);
	return_value = (char **)malloc(sizeof(char *) * (counter(s, c) + 1));
	if (!return_value)
		return (NULL);
	count = 0;
	num = counter(s, c);
	while (*s == c)
		s++;
	while (count < num)
	{
		return_value[count] = allocate((char *)s, c);
		if (!return_value[count])
			return (free_memory(return_value, count));
		s = check(s, c, count, num);
		count++;
	}
	return_value[count] = NULL;
	return (return_value);
}

static char	*allocate(char *s, char c)
{
	char	*str;
	char	*front;
	char	*back;
	size_t	size;
	size_t	i;

	size = 0;
	front = s;
	while (*front != c && *front != '\0')
		front++;
	back = front;
	front = s;
	size = ft_strlen(front) - ft_strlen(back);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(str + i) = *(front + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

static const char	*check(char const *s, char c, size_t count, size_t num)
{
	if (count + 1 < num)
	{
		while (*s != c)
			s++;
		while (*s == c)
			s++;
		return (s);
	}
	return (s);
}

static size_t	counter(char const *s, char c)
{
	size_t	word_count;
	int		position_s;
	int		flag;

	flag = 0;
	position_s = 0;
	word_count = 0;
	while (*(s + position_s))
	{
		if (*(s + position_s) == c)
			flag = 0;
		else if (*(s + position_s) != c && flag == 0)
		{
			word_count++;
			flag = 1;
		}
		position_s++;
	}
	return (word_count);
}

static void	*free_memory(char **return_value, int i)
{
	while (i > 0)
		free(return_value[i--]);
	free(return_value);
	return (NULL);
}

// int	main(void)
// {
// 	char	*ptr = "aaabbcccbbd";
// 	char	**str;
// 	size_t	i;
// 	size_t	j;

// 	str = ft_split(ptr, 'b');
// 	i = counter(ptr, 'b');
// 	j = 0;
// 	while (j < i)
// 	{
// 		printf("%s\n", str[j]);
// 		j++;
// 	}
// 	return (0);
// }
// gcc -Wall -Wextra -Werror ft_split.c ft_strlen.c