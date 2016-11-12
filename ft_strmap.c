/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:38:37 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 13:53:37 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char *new;

	new = (char *)malloc(sizeof(*new) * ft_strlen((char *)s) + 1);
	if (new)
	{
		while (*s)
		{
			*new = *s;
			f(*new);
			new++;
			s++;
		}
		*new = '\0';
	}
	return (new);
}
