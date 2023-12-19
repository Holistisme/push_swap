/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:28:41 by aheitz            #+#    #+#             */
/*   Updated: 2023/12/19 19:25:23 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>

typedef struct s_list
{
	int				integer;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

void	swap(t_list **stack);

#endif