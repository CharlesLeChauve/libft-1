/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:33:23 by nope              #+#    #+#             */
/*   Updated: 2023/09/04 17:35:26 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list	*new_element;

	new_element = (t_list *)malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	//allouer mémoire pour le champ content dont la taille varie
	new_element->content = malloc(content_size);
	//affecter la valeur par copie
	ft_memcpy(new_element->content, content, content_size);
	//affectation de content_size aussi du coup
	new_element->content_size = content_size;
	new_element->next = NULL;
	return (new_element);
}
