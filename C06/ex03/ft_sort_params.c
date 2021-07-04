/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:36:19 by nors              #+#    #+#             */
/*   Updated: 2021/07/04 10:36:19 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2){
	int i=0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return s1[i] - s2[i];
}

int	main(int c, char **a){
	int i;
	int j=1;
	int k;
	char *t;
	while(j < c){
		i=1;
		while(i < c - 1){
			if((ft_strcmp(a[i],a[i+1]) > 0) && *a[i]){
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
			i++;
		}
		j++;
	}
	j=1;
	k=0;
	while(j < c){
		k=0;
		while(a[j][k])
			k++;
		write(1, a[j],k);
		write(1,"\n",1);
		j++;
	}
	return 0;
}
