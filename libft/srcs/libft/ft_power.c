/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlely <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:19:55 by hlely             #+#    #+#             */
/*   Updated: 2018/05/15 10:19:12 by hlely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int n, int p)
{
	int i;

	if (p > 0)
	{
		i = n;
		if (p == 0)
			return (1);
		while (p > 1)
		{
			i = i * n;
			p--;
		}
		return (i);
	}
	return (0);
}