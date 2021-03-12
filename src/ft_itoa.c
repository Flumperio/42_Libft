/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:26:18 by juasanto          #+#    #+#             */
/*   Updated: 2021/03/12 13:52:09 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_nblen(unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char			*dest;
	unsigned int	len;
	unsigned int	nb;
	unsigned int	i;

	nb = (n < 0 ? -n : n);
	len = ft_nblen(nb);
	i = 0;
	if (!(dest = (ft_calloc(sizeof(char), len + 1))))
		return (NULL);
	if (n < 0)
	{
		dest[i] = '-';
		len++;
	}
	i = len - 1;
	while (nb >= 10)
	{
		dest[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	dest[i] = nb % 10 + 48;
	dest[len] = '\0';
	return (dest);
}
int	cnt_char(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		tmp;
	int		cnt;

	//cnt = 0;
	if (n < 0)
		tmp = -n;
	else
		tmp = n;
	len = cnt_char(tmp);
	dest = malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	if (n < 0)
		dest[0] = '-';
	cnt = len - 1;
	while (tmp >= 10)
	{
		dest[cnt] = tmp % 10 + 48;
		tmp /= 10;
		cnt--;
	}
	dest[cnt] = tmp % 10 + 48;
	dest[len] = '\0';
	return (dest);
}
