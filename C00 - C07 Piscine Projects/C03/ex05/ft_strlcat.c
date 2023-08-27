/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:37:06 by hocal             #+#    #+#             */
/*   Updated: 2023/08/20 12:39:28 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
		++j;
	if (size < i)
	{
		j += size;
	}
	else
	{
		j += i;
	}
	while (*src && i < (size - 1) && size != 0)
	{
		dest[i] = *src;
		++i;
		++src;
	}
	dest[i] = 0;
	return (j);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest[20] = "xxxhelloxxx";
	char dest1[20] = "xxxhelloxxx";
	printf("%d %s \n", ft_strlcat(dest, "hello",15), dest);
	printf("%ld %s", strlcat(dest1, "hello",15), dest1);
}
*/
