/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:13:12 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/13 13:44:45 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowercase(str);
	while (str[i] != '\0')
	{
		if (str[i - 1] < 'a' || str[i - 1] > 'z')
		{
			if ((str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < '0' || str[i - 1] > '9'))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int    main (void)
{
   char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+ua";
  printf("%s", ft_strcapitalize(str));
  return (0);
}*/
