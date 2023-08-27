/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:30:43 by hocal             #+#    #+#             */
/*   Updated: 2023/08/20 12:26:56 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	limit;

	i = 0;
	limit = 0;
	while (dest[i])
		++i;
	while (*src && limit < nb)
	{
		dest[i++] = *src;
		++src;
		++limit;
	}
	dest[i] = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest[20] = "hello";
	char dest1[20] = "hello";
	ft_strncat(dest, "aszasdasd", 8);
	strncat(dest1, "aszasdasd", 8);
	printf("%s  %s", dest, dest1);
}
*/
