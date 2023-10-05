/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:15:39 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/17 21:21:29 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int main (void)
{
  char src[5] = "qtal";
  char dest[10] = "hola";
  printf("%s\n", ft_strncat(dest, src, 5));
  //printf("%s", strncat(dest, src, 5));
  return (0);
}*/