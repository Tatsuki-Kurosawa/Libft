/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurosawaitsuki <kurosawaitsuki@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:27:17 by kurosawaits       #+#    #+#             */
/*   Updated: 2022/11/26 21:55:41 by kurosawaits      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_lst;

	if (lst && f && del)
	{
		new_lst = NULL;
		while (lst)
		{
			tmp = ft_lstnew((*f)(lst->content));
			if (!tmp)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, tmp);
			lst = lst->next;
		}
		return (new_lst);
	}
	return (NULL);
}

// 関数もアドレス上に格納されるので、その先頭アドレスの存在も確認する必要がある.
// すでにあるリストの各ノードに関数fを適用し、new_lstをリストの先頭として新しいリストを作成する.
// 新しいリストの先頭をNULLにしているのは、
// ft_lstadd_back内で第一引数のダブルポインタがNULLの時は第二引数に先頭を差させることができるため.
// ft_lstnewのmalloc確保に失敗したら確保した分を全て解放.
// 失敗したら途中からリストが作成される.