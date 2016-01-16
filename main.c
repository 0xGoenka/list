/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:33:55 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/16 22:49:38 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		main(void)
{

	int i;

	i = 0;
	t_lst *liste = (t_lst *)malloc(sizeof(t_lst));
	liste->next = NULL;
	//liste->prev = NULL;
	t_lst *ptr;
	while (i < 10)
	{
		insert(liste, "fisrt", i);
		i++;
	}
	printf("is 10 found ? %d\n",find(liste , 4));	
		print(liste->next);
		del(liste);
		print(liste->next);
	return (0);
}
