/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:34:39 by hocal             #+#    #+#             */
/*   Updated: 2023/08/20 12:27:57 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == 0 || to_find[j] == str[i + j])
		{
			if (to_find[j] == 0)
				return (str + i);
			j++;
		}
		++i;
	}
	return (0);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest[20] = "xxxhelloxxx";
	printf("%s", ft_strstr(dest, "hello"));
}
*/
