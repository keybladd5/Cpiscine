/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:14:59 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/20 17:39:09 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
	char	str1[] = "123";
	char	str2[] = "1123";
	printf("%i\n", ft_strncmp(str1, str2, 1));
	printf("%i", strncmp(str1, str2, 1));
	return (0);
}*/
