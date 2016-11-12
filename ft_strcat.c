/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <thninh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:37:07 by thninh            #+#    #+#             */
/*   Updated: 2016/11/11 12:59:16 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dest, const char *src)
{
	char	*cop;
	size_t	len;
	size_t	i;

	i = 0;
	cop = (char *)src;
	len = (size_t)ft_strlen(dest);
	if (*cop)
	{
		while (cop[i] != '\0')
		{
			dest[len + i] = cop[i];
			i++;
		}
		dest[len + i] = '\0';
	}
	return (dest);
}
