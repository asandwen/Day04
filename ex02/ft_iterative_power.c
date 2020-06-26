/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:19:00 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/26 08:27:51 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int a;
	int b;
	if (power < 0)
		return 0;
	else if(power == 0)
		return 1;
	else
	{
		b = 0;
		a = 1;
		while (b < power)
		{
			a = a *nb;
			b ++;

		}
		return (a);
	}
}

