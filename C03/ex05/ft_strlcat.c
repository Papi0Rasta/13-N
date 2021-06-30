/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:02:30 by nors              #+#    #+#             */
/*   Updated: 2021/06/29 13:02:30 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size){
	int i=0;
	int j=0;
	int n=0;
	while(dest[i] && n < size){
		i++;
		n++;
	}
	while(src[j] && n < size){
		dest[i+j] = size[j];
		j++;
		n++;
	}
	if(n < size)	
		dest[i+i] = '\0';
	while(src[i]){
		n++;
		i++;
	}
	return n;
}
