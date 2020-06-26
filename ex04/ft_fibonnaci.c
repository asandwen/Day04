/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:40:05 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/26 08:57:40 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return 0;
	else if (index == 1)
		return 1;
	else 
		return(ft_fibonacci(index -2) + ft_fibonacci(index -1));
}


