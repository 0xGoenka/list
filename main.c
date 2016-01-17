/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:33:55 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/17 19:26:03 by eleclet          ###   ########.fr       */
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
	ptr = find(liste->next, 4);
	printf("4 = %s\n",ptr->data->s);
	//printf("is 4 found ? %d\n",find(liste->next , 4));	
		print(liste->next);
		del(liste);
		//print(liste->next);
	return (0);
}
