/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:16:52 by thninh            #+#    #+#             */
/*   Updated: 2016/11/12 16:16:55 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  t_list  *list;
  t_list  *nxt;

  list = *alst;
  if (list)
  {
    while (list->next)
    {
      nxt = list->next;
      del(list->content, list->content_size);
      free(list)
      list = list->next;
    }
    list = NULL;
  }
}

