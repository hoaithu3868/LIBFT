/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:52:14 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 13:54:27 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*new;

	n = 0;
	new = (char *)malloc(sizeof(*new) + ft_strlen((char *)s) + 1);
	if (new)
	{
		while (*s)
		{
			new[n] = s[n];
			f(n, new[n]);
			n++;
		}
		new[n] = '\0';
	}
	return (new);
}
