/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:48:27 by juasanto          #+#    #+#             */
/*   Updated: 2020/07/13 10:04:02 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *trgt;

	trgt = malloc(sizeof(*str) * (ft_strlen((char *)str)) + 1);
	if (trgt)
		trgt = ft_strcpy(trgt, (char *)str);
	return (trgt);
}
