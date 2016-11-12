/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <thninh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:38:27 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 11:02:53 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = (char *)malloc(sizeof(*result) * (ft_strlen((char *)s1) +
				ft_strlen((char *)s2)) + 1);
	if (result)
	{
		while (*s1)
		{
			result[i] = s1[i];
			i++;
		}
		while (*s2)
		{
			result[i] = s2[j];
			i++;
			j++;
		}
		result[i] = '\0';
		return (result);
	}
	return (NULL);
}
