/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:30:25 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/23 21:33:43 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int main() 
{
  printf("%d", ft_fibonacci(7));
  return 0;
}
///desmonta el index hasta llegar a 1 y 0, al volver a sumar 
//el arbol des de abajo, obtenemos la posicion en la base de fibonacci 
//del numero introducido en el index*/
