/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ovictor <ovictor@student.21-school>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:39:35 by ovictor           #+#    #+#             */
/*   Updated: 2020/08/25 17:06:00 by ovictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *s;

	i = 0;
	s = malloc(length * sizeof(int));
	while (i < lenght)
	{
		s[i] = f(tab[i]);
		i++;
	}
	return (s);
}
