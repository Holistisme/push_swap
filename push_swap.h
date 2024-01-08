/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:28:41 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/08 16:07:40 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include <stdlib.h>

//Linked list structure
typedef struct s_list
{
	int				integer;
	struct s_list	*next;
}					t_list;

//Functions from error_checking.c
char	*integer_checking(char *argv);
void	clone_checking(t_list **stack);
void	overflow_checking(char *argv);
void	stop(void);
ssize_t	value_checking(char user_digit, char max_digit);

//Functions from stack_initilization.c
int		ft_atoi(const char *nptr);
t_list	**stack_initialization(int argc, char **argv);
t_list	*add_node(char *argv);
void	free_stack(t_list **stack);

// Functions from inst_push.c
void	push(t_list **stack_src, t_list **stack_dst);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);

//Functions from inst_rev_rotate.c
void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// Functions from inst_rotate.c
void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

// Functions from inst_swap.c
void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

//Functions from main.c and others
void	display(t_list **stack_a, t_list **stack_b);

#endif