/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nope <nope@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:15:30 by nope              #+#    #+#             */
/*   Updated: 2023/09/01 16:35:26 by nope             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long	ft_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (nb == 1 || power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}
