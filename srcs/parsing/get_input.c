/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabertau <vabertau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:55:39 by vabertau          #+#    #+#             */
/*   Updated: 2024/05/09 16:26:20 by vabertau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	get_input(t_data *data)
{
	char	*line;

	line = readline("minishell\% ");
	// line = ft_strdup("echo \"> >> < * ? [ ] | ; [ ] || && ( ) & # $  <<\"");
	if (line == NULL)
	{
		ft_printf("\n");
		exit_free(data, 0);
	}
	data->cmdline = line;
	add_history(data->cmdline);
	// lexer(data);
}
