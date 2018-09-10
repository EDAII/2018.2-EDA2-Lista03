#include <stdio.h>
#define CLK_PER_SEC 100000

int * shellSort(int *vector, int vector_size) {
    int i , j , aux;
    int gap = 1;
    while(gap < vector_size) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < vector_size; i++) {
            aux = vector[i];
            j = i;
            while (j >= gap && aux < vector[j - gap]) {
                vector[j] = vector [j - gap];
                j = j - gap;
            }
            vector [j] = aux;
        }
    }
    return vector;
}

void shellSort_sort_case(char *text, int *vector, int vector_size)
{
    clock_t start, end;

    start = clock();
    int *result = shellSort(vector, vector_size);
    end = clock();
    printf("%s\n", text);

    printf("Tempo de execução da ordenação: %lfs\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("------------------\n");
}
