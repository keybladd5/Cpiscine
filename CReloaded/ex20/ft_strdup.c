/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:36:12 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/06 17:36:14 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((sizeof(char) * ft_strlen(src)) + 1);
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}

/*int	main(void)
{
	char *src = "";
	char *dest = ft_strdup(src);
	if (!dest)
		return (NULL);
	printf("%s\n", dest);
	printf("%s\n", ft_strdup(src));
	free (dest);
	return (0);
}*/