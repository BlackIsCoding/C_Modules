/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:07:52 by akoudri           #+#    #+#             */
/*   Updated: 2025/09/01 13:58:02 by akoudri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	lenght;
	int	i;
	int	k;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	lenght = max - min;
	*range = (int *)malloc(lenght * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = min;
	k = 0;
	while (i < max)
	{
		(*range)[k] = i;
		i++;
		k++;
	}
	return (lenght);
}
