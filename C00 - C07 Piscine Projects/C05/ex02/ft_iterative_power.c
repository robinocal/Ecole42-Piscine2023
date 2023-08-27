/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 07:46:24 by hocal             #+#    #+#             */
/*   Updated: 2023/08/22 03:36:53 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		j = j * nb;
		i++;
	}
	return (j);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int nb;
	int power;
	
	nb = 2;
	power = 3;
	
	printf("%d\n", ft_iterative_power(nb, power));
}
*/
