/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:30:47 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/16 22:22:58 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_lst	*add(t_lst *liste, char *s, int index)
{
	t_lst *tmp;

	tmp = malloc(sizeof(t_lst));
	if (tmp)
	{
		tmp->s = s;
		tmp->i = index;
		tmp->next = liste;
	}
	return (tmp);

}
t_lst 	*try(t_lst *liste, char *s ,int index)
{
return (liste);	
}
//t_lst	*circle(t_lst *liste,)
void	printlist(t_lst *lst)
{
	printf("s = %s and i = %d\n", lst->s, lst->i);
	lst = lst->next;
}
void	insert(t_lst *liste, char *s, int index)
{
	while (liste->next != NULL)
	{
		liste = liste->next;
	}
	liste->next = (t_lst *)malloc(sizeof(t_lst));
	liste = liste->next;
	liste->next =NULL;
	liste->i = index;
	liste->s = s;
}
void	print(t_lst *liste)
{
	if (!liste)
	{
		return;
	}
	printf("index = %d\n", liste->i);
	print(liste->next);
}
int		find(t_lst *liste, int i)
{	
	while (liste)
	{
		if (liste->i == i)
			return (1);
		liste = liste->next;
	}
	return (0);
}
void	del(t_lst *liste)
{
	t_lst *tmp;
	while (liste)
	{
		tmp = liste;
		liste = liste->next;
		free(tmp);
		tmp = NULL;
	}
}
