/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:22:17 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 13:52:45 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;

	cur = (unsigned char *)s;
	while (*cur && n)
	{
		if (*cur == c)
			return ((void*)cur);
		cur++;
		n--;
	}
	if (*cur == c)
		return ((void*)cur);
	return (NULL);
}
