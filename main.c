/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:35:39 by aheitz            #+#    #+#             */
/*   Updated: 2023/12/08 23:24:01 by aheitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formatting.h"
#include <stdio.h>

int main (void) {
	size_t	choice = 42;

	(printf(WHTHB), display_banner("WELCOME TO THE TEST PROGRAM"), printf(RESET));
	while (choice) {
		(printf("\n" GRNHB), display_banner("MAKE YOUR DEMOCRATIC CHOICE!"), printf(RESET));
		printf(HBLU "\nList of executable actions :\n" RESET);
		printf(BLU "1 - 'Swap' instruction test\n" RESET);
		printf(RED "0 - Program exit\n" RESET);
		printf("\nI wish to operate the action ");
		scanf("%zd", &choice);
		switch (choice)
		{
			case 1:
				printf("OK\n");
				break;
			case 0:
				printf(HGRN "End of program confirmed!\n\n" RESET);
				break;
			default:
				printf(URED "Error entering selection!\n" RESET);
				break;
		}
	}
	(printf(WHTHB), display_banner("STOP TEST PROGRAM"), printf(RESET "\n"));
	return (0);
}

void swap_test() {
	
}