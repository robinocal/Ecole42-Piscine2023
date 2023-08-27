/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:42:16 by hocal             #+#    #+#             */
/*   Updated: 2023/08/22 04:09:44 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int nb;
	int power;
	
	nb = 2;
	power = 5;
	
	printf("%d\n", ft_recursive_power(nb, power));
}
*/
