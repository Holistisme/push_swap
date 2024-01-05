/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 23:28:41 by aheitz            #+#    #+#             */
/*   Updated: 2024/01/05 18:20:44 by aheitz           ###   ########.fr       */
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
void	duplicate_checking(t_list *stack);
void	overflow_checking(char *argv);
void	stop(void);
ssize_t	value_checking(char user_digit, char max_digit);

//Functions from stack_initilization.c
int		ft_atoi(const char *nptr);
t_list	**stack_initialization(int argc, char **argv);
t_list	*add_node(char *argv);

//Functions from swap_instructions.c
void	push(t_list **stack_src, t_list **stack_dst);
void	rotate(t_list **stack);
void	swap(t_list **stack);

//Functions from main.c
void	display(t_list **stack_a, t_list **stack_b);

#endif