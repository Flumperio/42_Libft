/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 12:27:46 by juasanto          #+#    #+#             */
/*   Updated: 2021/03/05 13:45:55 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;
	int	strcmp;

	cont = 0;
	strcmp = 0;
	while (s1[cont] == s2[cont] && s1[cont] != 0 && s2[cont] != 0)
		cont++;
	strcmp = s1[cont] - s2[cont];
	return (strcmp);
}
