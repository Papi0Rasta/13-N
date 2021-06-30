/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:43:35 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 14:43:35 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c){
	write(1,&c,1);
}

void	ft_print_comb(int k){
	int n[k];
	int j;
	int i = 0;
	n[i] = 0;
	while(n[i] <= 9){
		n[i+1]=n[i]+1;
		while(n[i+1] <= 9){
			n[i+1]=n[i]+1;
			while(n[i+1] <= 9){
				j = k;
				while(j != i){
					ft_putchar(n[i] + '0');
					i++;
					j--;
				}
				if(n[0] != 7 || n[1] != 8 || n[2] != 9){
					ft_putchar(',');
					ft_putchar(' ');
				}
				n[i+1]++;
			}
			n[i+1]++;
		}
		n[i]++;
	}
}


int	main(){
	ft_print_comb(3);
	return 0;
}
