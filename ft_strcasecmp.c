/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:35:23 by nope              #+#    #+#             */
/*   Updated: 2023/09/05 12:11:42 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	char	c1;
	char	c2;	

	c1 = ft_tolower(*s1);
	c2 = ft_tolower(*s2);
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2)
	{
		if (c1 < c2)
			return (-1);
		else if (c1 > c2)
			return (1);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-1);
	else if (*s1 != '\0' && *s2 == '\0')
		return (1);
	return (0);
}
