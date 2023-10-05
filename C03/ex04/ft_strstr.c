/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:40:43 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/20 18:40:46 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle, size_t len)
{
	char	*s;
	char	*tf;

	if (!*haystack && !*needle)
		return (haystack);
	while (*haystack)
	{
		s = haystack;
		tf = needle;
		while (*s && *tf && *s == *tf)
		{
			++s;
			++tf;
		}
		if (!*tf)
			return (str);
		++haystack;
	}
	return (NULL);
}
/*#include <string.h>

int main (void)
{
  char *dest = "hola lao";
  char *to_find = "lao";
  printf("%s", ft_strstr(dest, to_find));
  //printf("\n");
  printf("%s", strstr(dest, to_find));
  return(0);
}*/
