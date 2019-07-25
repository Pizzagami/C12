/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:30:38 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:30:40 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
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
