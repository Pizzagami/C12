/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:33:15 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:33:20 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
