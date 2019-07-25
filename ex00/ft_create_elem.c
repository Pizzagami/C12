/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:30:21 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:30:23 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *nouv_elem;

	if (!(nouv_elem = malloc(sizeof(t_list))))
		return (NULL);
	if (nouv_elem)
	{
		nouv_elem->data = data;
		nouv_elem->next = NULL;
	}
	return (nouv_elem);
}
