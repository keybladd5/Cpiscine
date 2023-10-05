/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:51:28 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/17 16:07:53 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
  char dest[] = "9989787798989";

  printf("%i", ft_str_is_numeric(dest));
  return (0);
}*/
