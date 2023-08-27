/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:29:00 by hocal             #+#    #+#             */
/*   Updated: 2023/08/20 12:26:10 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		++i;
	while (*src)
	{
		dest[i++] = *src;
		++src;
	}
	dest[i] = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	//char dest[10] = "hello";
	char dest1[10] = "hello";
	//ft_strcat(dest, "aszasdasd");
	strcat(dest1, "aszasdasd");
	printf("%s", dest1);
}
*/
