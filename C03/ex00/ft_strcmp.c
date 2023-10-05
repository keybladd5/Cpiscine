/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:14:34 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/20 17:36:33 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i] || str1[i] < str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main (void)
{
  char str1[] = "asddasda";
  char str2[] = "asddasdafaskjdgfasdjsgbakjsbfdgag";
  printf("%i\n", ft_strcmp(str1, str2));
  printf("%i", strcmp(str1, str2));
  return (0);
}*/
