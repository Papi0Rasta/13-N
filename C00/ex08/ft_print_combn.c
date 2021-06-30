/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:47:30 by nors              #+#    #+#             */
/*   Updated: 2021/06/30 21:47:30 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c){
	write(1,&c,1);
}

void	convert(int *tab, int n){
	int i=0;
	while(i < n){
		if(tab[i] >= tab[i+1])
			return ;
		i++;
	}
	i=0;
	while(i < n){
		ft_putchar(tab[i] + '0');
		i++;
	}
	if(tab[0] < (10 - n)){
		ft_putchar(',');
		ft_putchar(' ');
	}
}


void	ft_print_combn(int n){
	int i=0;
	int tab[10];
	if(n <= 0 || n >= 10)
		return ;
	while(i < n){
		tab[i]=i;
		i++;
	}
	while (tab[0] <= (10 - n) && n >= 1){
		convert(tab, n);
		tab[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}

int	main(){
	ft_print_combn(3);
	return 0;
}
