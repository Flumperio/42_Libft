/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:59:50 by juasanto          #+#    #+#             */
/*   Updated: 2020/07/14 12:09:55 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	cnt;

	cnt = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (*s1)
	{
		str[cnt] = *s1;
		cnt++;
		s1++;
	}
	while (*s2)
	{
		str[cnt] = *s2;
		cnt++;
		s2++;
	}
	str[cnt] = 0;
	return (str);
}
