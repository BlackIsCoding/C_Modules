/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:31:42 by akoudri           #+#    #+#             */
/*   Updated: 2025/09/01 14:23:04 by akoudri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

int	ft_strcpy(char *dest, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

void	arrayy(char *arr, int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		pos = ft_strcpy(arr, strs[i], pos);
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
			{
				arr[pos] = sep[k];
				pos++;
				k++;
			}
		}
		i++;
	}
	arr[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	char	*empty;
	int		total;

	if (size == 0)
	{
		empty = (char *)malloc(1);
		if (!empty)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	total = total_len(size, strs, sep);
	arr = (char *)malloc(total + 1);
	if (!arr)
		return (NULL);
	arrayy(arr, size, strs, sep);
	return (arr);
}
