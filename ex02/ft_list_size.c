/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:30:54 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:30:57 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		compteur;
	t_list	*tmp;

	tmp = begin_list;
	compteur = 0;
	while (tmp != NULL)
	{
		compteur++;
		tmp = tmp->next;
	}
	return (compteur);
}
