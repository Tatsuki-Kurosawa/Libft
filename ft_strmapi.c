/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurosaw <tkurosaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:21:42 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/25 19:24:30 by tkurosaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*return_value;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	return_value = (char *)malloc(ft_strlen(s) + 1);
	if (!return_value)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(return_value + i) = f(i, *(s + i));
		i++;
	}
	*(return_value + i) = '\0';
	return (return_value);
}
