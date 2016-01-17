/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:30:47 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/17 19:54:22 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_lst	*add(t_lst *liste, char *s, int index)
{
	t_lst *tmp;

	tmp = malloc(sizeof(t_lst));
	tmp->data = malloc(sizeof(t_data));
	if (tmp)
	{
		tmp->data->s = s;
		tmp->index = index;
		tmp->next = liste;
	}
	return (tmp);

}
t_lst 	*try(t_lst *liste, char *s ,int index)
{
return (liste);	
}
void	printlist(t_lst *lst)
{
	printf("s = %s and i = %d\n", lst->data->s, lst->index);
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
	liste->index = index;
	liste->data = (t_data *)malloc(sizeof(t_data));
	liste->data->s =NULL;
}
void	print(t_lst *liste)
{
	if (!liste)
	{
		return;
	}
	printf("index = %d\n", liste->index);
	print(liste->next);
}
t_lst	*find(t_lst *liste, int i)
{	
	while (liste)
	{	
		printf("liste->i %d\n",liste->index);
		if (liste->index == i)
			return (liste);
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
		free(tmp->data);
		liste = liste->next;
		free(tmp);
		tmp = NULL;
	}
}
//void change
//t_lst	lsthead()
