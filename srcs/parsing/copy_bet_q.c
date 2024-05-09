/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_bet_q.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hedi <hedi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:50:32 by vabertau          #+#    #+#             */
/*   Updated: 2024/05/08 19:40:17 by hedi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

// copies characters between quotes without copying the quotes. SQ TO COPY ?
void	copy_bet_sq(int *i, int *j, const char *s, char *tmp)
{
	(*i)++;
	while (s[*i] && s[*i] != '\'')
	{
		tmp[*j] = s[*i];
		(*i)++;
		(*j)++;
	}
	(*i)++;
}

// copies characters between quotes without copying the quotes.
void	copy_bet_dq(int *i, int *j, const char *s, char *tmp)
{
	(*i)++;
	while (s[*i] && s[*i] != '\"')
	{
		tmp[*j] = s[*i];
		(*i)++;
		(*j)++;
	}
	(*i)++;
}
