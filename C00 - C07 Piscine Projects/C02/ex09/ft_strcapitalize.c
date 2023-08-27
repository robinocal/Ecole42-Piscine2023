/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 00:46:25 by hocal             #+#    #+#             */
/*   Updated: 2023/08/20 06:59:14 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	was_space;

	i = 0;
	was_space = 1;
	while (str[i])
	{
		if (was_space && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!was_space && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		was_space = !((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'));
		++i;
	}
	return (str);
}
