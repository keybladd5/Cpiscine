/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:55:23 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/05 19:30:44 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ft_putstr(char **str, int size)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		while (*str[i])
		{
			ft_putchar(*str[i]);
			(str[i])++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
		s1++;
	return (*s1 - *s2);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		while (j < (argc - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
		j = 1;
	}
	ft_putstr(argv, argc - 1);
	return (0);
}
