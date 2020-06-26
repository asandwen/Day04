/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandwen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:40:05 by asandwen          #+#    #+#             */
/*   Updated: 2020/06/26 08:49:30 by asandwen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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
int main()
{
	int a;
	a = ft_fibonacci(9);
	printf("%d",a);
	return 0;
}

