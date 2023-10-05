/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:22:30 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/27 20:53:20 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = argc - 1;
	i = 0;
	if (argc == 1)
		return (0);
	else
	{
		while (x > 0)
		{
			i = 0;
			while (argv[x][i])
			{
				write(1, &argv[x][i], 1);
				i++;
			}
			x--;
			write (1, "\n", 1);
		}
		return (0);
	}
}
