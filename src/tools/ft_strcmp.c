/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosta <ehosta@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:16:51 by ehosta            #+#    #+#             */
/*   Updated: 2024/09/23 19:16:51 by ehosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	ft_strcmp(const char *alpha, const char *beta)
{
	int	i;

	i = 0;
	while (alpha[i] && alpha[i] == beta[i])
		i++;
	return (alpha[i] - beta[i]);
}
