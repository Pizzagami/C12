/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:33:03 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:33:04 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr != NULL)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
			(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
