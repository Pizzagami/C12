/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:33:35 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:35:03 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		curr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(curr);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		curr = curr->next;
	}
}
