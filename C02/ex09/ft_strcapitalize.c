/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:46:56 by nors              #+#    #+#             */
/*   Updated: 2021/06/28 19:46:56 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str){
	int i=0;
	while(str[i]){
		if((str[i-1] < '0' && str[i-1] > '9') || (str[i-1] < 'A' && str[i-1] > 'Z') || (str[i-1] < 'a' && str[i-1] > 'z')){
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}
