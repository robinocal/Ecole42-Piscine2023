/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 06:47:28 by hocal             #+#    #+#             */
/*   Updated: 2023/08/22 03:36:16 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if ((nb < 0) || (nb > 12))
		return (0);
	res = 1;
	i = 0;
	while (i < nb)
	{
		res *= i + 1;
		i++;
	}
	return (res);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int nb;
	nb = 5;
	
	printf("%d\n", ft_iterative_factorial(nb));
}
*/
