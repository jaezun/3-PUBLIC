// Simple and functional online compiler: https://ideone.com/

#include <stdio.h>
#include <string.h>
#include <time.h>


static void		add_to_file(char *src_inverse)
{

}

static void		dechiffrer(char *src_inverse)
{
	char	src_inverse_inverse[1000];
	int	i, j;

	i = (strlen(src_inverse) - 1);
	j = 0;
	while (src_inverse[i])
	{
		if (i % 2 == 0)
			src_inverse_inverse[j++] = src_inverse[i];
		i--;
	}
	src_inverse_inverse[j] = '\0';
	printf("%s\n",src_inverse_inverse);
}

static void		chiffrer(char *src)
{
	char	src_inverse[1000];
	char	*str_rand = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$^&*()_+{}[]:;/?.<`=-";
	int		i, j, k;

	i = 0;
	j = strlen(src) - 1;
	while (src[j])
	{
		src_inverse[i++] = src[j--];
		time(0);
		k = rand() % (strlen(str_rand));
		src_inverse[i++] = str_rand[k];
	}
	src_inverse[i] = '\0';
	printf("%s\n%s\n", src, src_inverse);
	// add_to_file(src_inverse);
}

int				main(int ac, char **av)
{
	int			i;

	i = -1;
	if (ac == 2)
	{
		if (!av[1])
		{
			printf("NULL\n");
			return (-1);
		}
		else
		{
			printf("[1] Chiffrer la phrase\n[2] Dechiffrer la phrase\n");
			scanf("%d", &i);
			if (i == 1)
				chiffrer(av[1]);
			else if (i == 2)
				dechiffrer(av[1]);
		}
	}
	return (0);
}


/*
** Main if no terminal at hand
*/

// int		main(void)
// {
// 	dechiffrer("");
// 	return (0);
// }
