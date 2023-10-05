/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:20:03 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/13 12:23:10 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
  char dest[] = "ADD1DD";

  printf("%i", ft_str_is_uppercase(dest));
  return (0);
}*/
