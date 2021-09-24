/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brattles <brattles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 00:58:00 by brattles          #+#    #+#             */
/*   Updated: 2021/08/27 12:22:35 by brattles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_summary *summary, bool print_flag)
{
	s_ops(&summary->b);
	if (print_flag)
		ft_putendl_fd("sb", STDOUT_FILENO);
}
