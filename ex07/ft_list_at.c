/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selgrabl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:32:17 by selgrabl          #+#    #+#             */
/*   Updated: 2019/07/25 17:32:19 by selgrabl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

unsigned int	ft_list_size2(t_list *begin_list)
{
	unsigned int	compteur;
	t_list			*tmp;

	tmp = begin_list;
	compteur = 0;
	while (tmp != NULL)
	{
		compteur++;
		tmp = tmp->next;
	}
	return (compteur);
}

t_list			*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	taille;
	unsigned int	i;
	t_list			*element;

	element = begin_list;
	i = 0;
	taille = ft_list_size2(begin_list);
	if (taille < nbr)
		return (NULL);
	while (i < nbr)
	{
		element = element->next;
		i++;
	}
	return (element);
}
