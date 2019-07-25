/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:32:33 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:32:35 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *previous;
	t_list *current;
	t_list *next;

	if (begin_list == 0 || *begin_list == 0 || (*begin_list)->next == 0)
		return ;
	previous = 0;
	current = *begin_list;
	while (current != 0)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}
