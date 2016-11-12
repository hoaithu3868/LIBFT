/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <thninh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:20:06 by thninh            #+#    #+#             */
/*   Updated: 2016/11/11 12:57:37 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*cop;
	size_t	i;
	size_t	len;

	i = 0;
	len = (size_t)ft_strlen(dest);
	cop = (char *)src;
	if (*cop)
	{
		while (i < n)
		{
			dest[len + i] = cop[i];
			i++;
		}
		dest[len + i] = '\0';
	}
	return (dest);
}
