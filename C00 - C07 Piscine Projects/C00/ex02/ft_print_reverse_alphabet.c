/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:08:55 by hocal             #+#    #+#             */
/*   Updated: 2023/08/06 20:26:51 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
