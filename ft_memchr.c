/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florianverge <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:10:12 by florianverge      #+#    #+#             */
/*   Updated: 2023/07/03 15:20:59 by florianverge     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*p_s;
	unsigned char	uc_c;

	p_s = ((unsigned char *)s);
	uc_c = ((unsigned char)c);
	i = 0;
	while (i < n)
	{
		if (*p_s == uc_c)
			return (p_s);
		i++;
		p_s++;
	}
	return (NULL);
}
