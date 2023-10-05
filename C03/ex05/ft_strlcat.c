/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:16:17 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/19 16:24:35 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;
	unsigned int	destsrc;

	i = 0;
	x = ft_strlen(dest);
	destlen = ft_strlen(dest);
	destsrc = ft_strlen(src);
	while (src[i] != '\0' && x < size - 1)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	if (size < destlen)
		destlen = size;
	return (destlen + destsrc);
}

/*int main(void)
{
        char src[5] = "Hola";
        char dest[5] = "Pol";
	char src1[5] = "Hola";
        char dest1[5] = "Pol";
        printf("%u\n", ft_strlcat(dest, src, 3));
        printf("%s\n", dest);
        printf("%lu\n", strlcat(dest1, src1, 3));
        printf("%s\n", dest1);
}*/
