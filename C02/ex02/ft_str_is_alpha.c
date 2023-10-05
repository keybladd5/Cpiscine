/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:40:30 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/17 16:07:28 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z') 
			&& !(str[i] >= 'a' && str[i] <= 'z'))
		{
			r = 0;
		}
		i++;
	}
	if (r == 1)
		return (1);
	return (0);
}

/*int main (void)
{
  char dest[] = "asdasfasdasd1";

  printf("%i", ft_str_is_alpha(dest));
  return (0);
}*/
