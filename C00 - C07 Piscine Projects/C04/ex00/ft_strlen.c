/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 01:14:29 by hocal             #+#    #+#             */
/*   Updated: 2023/08/21 19:09:14 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <unistd.h>
#include <stdio>
int main()
{
    char myString[] = "Hello, world!";
    int length = ft_strlen(myString);

    printf("Length of the string: %d\n", length);

    return 0;
}
*/
