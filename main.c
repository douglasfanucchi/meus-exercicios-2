#include <stdio.h>
#include <unistd.h>

/*int	ft_sort_int_tab(int *tab, int size);*/
void ft_rev_int_tab(int *tab, int size);
int main()
{
    int vetor[9] = {5, 4, 3, 9, 11, 99, 75, 1, 0};
/*    ft_rev_int_tab(vetor, 9);*/


    for(int i = 0; i < 9; i++)
        printf("%d ", vetor[i]);

/*    ft_sort_int_tab(&vetor[0], 9);*/
	ft_rev_int_tab(vetor, 9);

    printf("\n\n");
    for(int i = 0; i < 9; i++)
        printf("%d ", vetor[i]);
}
