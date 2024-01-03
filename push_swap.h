/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:28:41 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/03 19:32:11 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include <stdlib.h>

typedef struct s_list
{
	int				integer;
	struct s_list	*next;
}					t_list;

char	*integer_check(char *argv);
int		ft_atoi(const char *nptr);
t_list	**stack_initialization(int argc, char **argv);
t_list	*add_node(char *argv);
void	duplicate_checking(t_list *stack);

void	swap(t_list **stack);

#endif