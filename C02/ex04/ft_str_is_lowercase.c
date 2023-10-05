/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:16:41 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/13 12:20:22 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			r = 0;
		}
		i++;
	}
	if (r == 1)
		return (1);
	return (0);
}

/*#include <stdio.h>
int main (void)
{
  char dest[] = "asdasdasda";

  printf("%i", ft_str_is_lowercase(dest));
  return (0);
}*/