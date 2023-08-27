/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:53:36 by hocal             #+#    #+#             */
/*   Updated: 2023/08/23 11:24:54 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = (int *) malloc((max - min) * sizeof(int));
	if (min >= max || !tab)
	{
		return (NULL);
	}
	tab[0] = min;
	i = 1;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	max;
	int	min;
	int	taille;
	int	*tab;

	max = 50;
	min = 1;
	taille = max - min;
	
	tab = ft_range(min, max);
	int i = 0;
	while(i < taille)
	{
		if(tab[i] == max - 1)
		{
			printf("%d", tab[i]);
		}
		else
			printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
