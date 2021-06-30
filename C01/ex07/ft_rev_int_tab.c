/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:11:07 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 17:11:07 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(char *tab, int size){
	int i=0;
	int j=size-1;
	char n;
	while(i < j){
		n = tab[i];
		tab[i] = tab[j];
		tab[j] = n;
		i++;
		j--;
	}
	write(1, tab,size);
}

int	main(){
	char nbr[5] = {'1','2','3','4','5'};
	ft_rev_int_tab(nbr,5);
	return 0;
}
