/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:18:52 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/24 20:21:23 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	output;
	int	sign;

	output = 0;
	sign = 0;
	while ((*str >= 9 && *str <= 13) 
		|| *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign--;
		str++;
	}
	if ((sign % 2) == 0)
		sign = 1;
	else if ((sign % 2) != 0)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		output = (output * 10) + (*str - '0');
		str++;
	}
	return (output * sign);
}
/*#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) 
{
  if(argc == 1)
    write(1, "\n", 1);
  //char a[] = ft_atoi(argv[1]);
  int result = ft_atoi(argv[1]);
  printf("%d\n", result);
  printf("%d\n", atoi(argv[2]));
  return (0);
}*/
