/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:22:15 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 13:53:23 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(*str) * size + 1);
	if (str)
	{
		while (size)
		{
			*str = '\0';
			size--;
		}
		*str = '\0';
		return (str);
	}
	return (NULL);
}
