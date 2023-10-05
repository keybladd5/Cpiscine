/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:15:19 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/17 21:18:15 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
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
int main(void)
{
	char src[9] = "hola    ";
	char dest[15] = "ho";
	printf("%s\n", ft_strcat(dest, src));
	char src1[9] = "hola    ";
	char dest1[15] = "ho";
	printf("%s", strcat(dest1, src1));
  	return (0);
}*/
