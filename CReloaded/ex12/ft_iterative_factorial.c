/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:26:59 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/23 21:29:04 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int a)
{
	int	result;

	result = 1;
	if (a == 0)
		return (1);
	if (a < 0)
		return (0);
	while (a > 0)
	{
		result = result * a;
		a--;
	}
	return (result);
}
/*int main() 
{
  printf("%d", ft_iterative_factorialfactorial(5));
  return 0;
}*/
