/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 14:34:22 by akoudri           #+#    #+#             */
/*   Updated: 2025/08/19 12:18:27 by akoudri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*origi;

	origi = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{	
			*str = *str + 32;
		}
		str++;
	}
	return (origi);
}
