/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acourtin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:01:51 by acourtin          #+#    #+#             */
/*   Updated: 2017/11/06 16:24:29 by acourtin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int n;

	if (nb <= 0)
		return (0);
	n = 1;
	while (n * n != nb)
	{
		if (n * n > nb)
			return (0);
		n++;
	}
	return (n);
}

int main()
{
	printf("%i\n", ft_sqrt(0));
	return (0);
}