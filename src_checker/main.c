/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:47:22 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/20 14:47:24 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static void	bonuses(char **argv, int argc, int *i, int *flag)
{
	if (argc > 1 && ft_strcmp(argv[1], "--vc") == 0)
	{
		*i += 1;
		*flag = 1;
		if (argc > 2 && ft_strcmp(argv[2], "-i") == 0)
		{
			*i += 1;
			*flag = 2;
		}
	}
	if (argc > 1 && ft_strcmp(argv[1], "-i") == 0)
	{
		*i += 1;
		*flag = 3;
		if (argc > 2 && ft_strcmp(argv[2], "--vc") == 0)
		{
			*i += 1;
			*flag = 2;
		}
	}
}

int			main(int argc, char **argv)
{
	int res;
	int i;
	int flag;

	if (argc < 2)
		return (1);
	flag = 0;
	i = 0;
	bonuses(argv, argc, &i, &flag);
	if (argv[i + 1] == NULL || argv[i + 1][0] == '\0')
	{
		ft_printf("%{PURPLE Error\n");
		return (1);
	}
	if ((res = checker(argc - 1 - i, (const char **)argv + 1 + i)) == 1)
		ft_printf("%{PURPLE Error\n");
	else if (res == 2)
		ft_printf("%{RED KO\n");
	else if (res == 0)
		ft_printf("%{GREEN OK\n");
	return (0);
}
