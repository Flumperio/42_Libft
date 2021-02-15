/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juasanto <juasanto@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:27:03 by juasanto          #+#    #+#             */
/*   Updated: 2021/02/15 18:21:00 by juasanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int cont;
	int strcmp;

	cont = 0;
	strcmp = 0;
	while (s1[cont] == s2[cont] && s1[cont] != 0 && s2[cont] != 0)
		cont++;
	strcmp = s1[cont] - s2[cont];
	return (strcmp);
}
