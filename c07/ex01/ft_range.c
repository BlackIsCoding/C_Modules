/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 18:21:49 by akoudri           #+#    #+#             */
/*   Updated: 2025/09/03 19:15:05 by akoudri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	j;

	if (min >= max)
	{
		return (NULL);
	}
	range = (max - min);
	arr = (int *) malloc (range * sizeof(int));
	if (!arr)
		return (NULL);
	j = 0;
	while (min < max)
	{
		arr[j] = min;
		j++;
		min++;
	}
	return (arr);
}
