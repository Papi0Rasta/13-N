/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nors <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 23:07:03 by nors              #+#    #+#             */
/*   Updated: 2021/07/03 23:07:03 by nors             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc,char *argv[]){
	int i=0;
	char r = argc + '0';
	while(argv[0][i])
		i++;	
	write(1, argv[0],i);
	return 0;
}
