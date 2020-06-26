/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:09:57 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/26 08:16:41 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_factorial(int nb)
{
	if (nb > 12)
		return 0;
	if (nb < 0)
		return 1;
	if (nb >0)
		return(nb * ft_recursive_factorial(nb-1));
	else if (nb <0)
		return (nb * ft_recursive_factorial(nb +1));
	else 
		return 1;
}


