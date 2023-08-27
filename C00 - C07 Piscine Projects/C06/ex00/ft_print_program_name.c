/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hocal <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:53:32 by hocal             #+#    #+#             */
/*   Updated: 2023/08/24 08:54:30 by hocal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;

	(void)argc;
	name = argv[0];
	while (*name)
		write(1, name++, 1);
	write(1, "\n", 1);
	return (0);
}
