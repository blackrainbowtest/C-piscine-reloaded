/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramarak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:21:15 by aramarak          #+#    #+#             */
/*   Updated: 2025/01/19 15:28:05 by aramarak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		fact;

	fact = 1;
	if (nb <= 0)
		return (0);
	while (nb > 1)
	{
		fact *= nb;
		nb -= 1;
	}
	return (fact);
}
