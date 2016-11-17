/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:16:34 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 16:16:35 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
  t_list *list;

  list = *alst;
  if (list)
  {
    del(list->content, list->content_size);
    free(*list);
    *list = NULL;
  }
}
