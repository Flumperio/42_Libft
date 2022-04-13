/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 10:34:27 by juasanto          #+#    #+#             */
/*   Updated: 2022/04/13 12:04:07 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new_l)
{
	if (alst)
	{
		if (*alst)
			new->next = *alst;
		*alst = new;
	}
}
