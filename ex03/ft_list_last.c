/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:31:08 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:31:10 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list		*tmp;

	tmp = begin_list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
