/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:04:49 by juasanto          #+#    #+#             */
/*   Updated: 2020/07/23 08:43:52 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cnt;

	cnt = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (cnt < len && start < (unsigned int)ft_strlen(s))
	{
		str[cnt] = s[cnt + start];
		cnt++;
	}
	str[cnt] = 0;
	return (str);
}
