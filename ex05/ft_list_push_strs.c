/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:31:49 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:31:51 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front2(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	if (list)
	{
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(data);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*liste_add;

	liste_add = NULL;
	i = 0;
	if (size <= 0)
		return (NULL);
	liste_add = ft_create_elem(strs[i++]);
	while (i < size && strs[i])
		ft_list_push_front2(&liste_add, strs[i++]);
	return (liste_add);
}
