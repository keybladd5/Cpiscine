/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:14:34 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/04 19:26:48 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
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
