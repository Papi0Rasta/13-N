/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 01:04:08 by nors              #+#    #+#             */
/*   Updated: 2021/07/02 01:04:08 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c){
        write(1,&c,1);
}

void    ft_putnbr(int nb){
        if(nb > 9){
                ft_putnbr(nb / 10);
                ft_putchar(nb % 10 + '0');
        }else if(nb >= 0){
                ft_putchar(nb + '0');
        }else{
                ft_putchar('-');
                ft_putnbr(nb * -1);
        }
}

int	ft_atoi(char *str){
	int i=0;
	int ichara=1;
	int ar9am=0;
	
	while((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while(str[i] == '-' || str[i] == '+'){
		if(str[i] == '-')
			ichara *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9'){
		ar9am *= 10;
		ar9am += ichara * (str[i] - '0');
		i++;
	}
	return ar9am;
}

int	main(){
	ft_putnbr(ft_atoi(" ---+--+1234ab567"));
	return 0;
}
