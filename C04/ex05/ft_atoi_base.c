/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:01:12 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/23 12:49:11 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		while (base[x])
		{
			if (base[x] == base[i])
				return (0);
			if (base[i] == '-' || base[i] == '+')
				return (0);
			x++;
		}
		i++;
		x = i + 1;
	}
	return (i);
}

int	ft_check_str_in_base(char *str, char *base, int a)
{
	int	c;

	c = 0;
	while (base[c] != '\0')
	{
		if (base[c] == str[a])
			return (1);
		c++;
	}
	return (0);
}

int	ft_atoi(char *str, char *base, int a)
{
	int	c;
	int	num;

	c = 0;
	num = 0;
	while (str[a] != '\0' && ft_check_str_in_base(str, base, a) == 1)
	{
		while (base[c] != '\0')
		{
			if (base[c] == str[a])
				num = num * 10 + c;
			c++;
		}
		c = 0;
		a++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;
	int	s;
	int	n;

	a = 0;
	s = 1;
	if (ft_check_base(base) == 0)
		return (0);
	while ((str[a] >= 9 && str[a] <= 13)
		|| str[a] == ' ')
	{
		if (str[a] == '-')
			s = s * -1;
		a++;
	}
	while (str[a] == '-' || str[a] == '+')
		a++;
	n = ft_atoi(str, base, a);
	return (n * s);
}
/*#include <stdio.h>
int     main(void)
{
        int j;
        j = ft_atoi_base("42", "0123456789");
        printf("%d", j);
        return (0);
}
//13checkea el error de la base
//38checkea que el caracter de str[a] esta en base[c] y retorna 1 (true)
//52 convierte el string a int a traves de la base
//59 a va cambiando a cada iteracion, checkea caracter 
//por caracter que se encuentre en la base los que no encuentra se los salta*/
