/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:23:08 by hocal             #+#    #+#             */
/*   Updated: 2023/08/20 12:24:55 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (*s1 == *s2)
	{
		if (*s1 == 0)
			return (0);
		if (++i >= n)
			break ;
		++s1;
		++s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
#include <stdio.h>

int main()
{
	int a = ft_strncmp("asa", "asz", 0);
	printf("%d", a);
}
*/
