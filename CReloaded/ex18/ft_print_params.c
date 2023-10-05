/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:02:10 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/04 19:46:54 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	if (argc == 1)
		return (0);
	else
	{
		while (argv[x])
		{
			i = 0;
			while (argv[x][i])
			{
				ft_putchar(argv[x][i]);
				i++;
			}
			x++;
			ft_putchar('\n');
		}
		return (0);
	}
}
