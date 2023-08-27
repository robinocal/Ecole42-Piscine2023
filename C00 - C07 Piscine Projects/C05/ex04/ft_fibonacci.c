/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:43:30 by hocal             #+#    #+#             */
/*   Updated: 2023/08/22 04:19:30 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int index;
	//Fibonacci index:
	//// 0 : 0
	//// 1 : 1
	//// 2 : 1
	//// 3 : 2
	//// 4 : 3
	//// 5 : 5
	//// 6 : 8
	//// 7 : 13
	//// 8 : 21
	//// 9 : 34
	//// 10 : 55
	//// 11 : 89
	//// 12 : 144
	//// 13 : 233
	//// 14 : 377
	//// 15 : 610
	//// 16 : 987
	
	index = 16;
	
	printf("%d\n", ft_fibonacci(index));
}
*/
