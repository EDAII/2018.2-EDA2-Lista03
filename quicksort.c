#include <stdio.h>
#define CLK_PER_SEC 100000


int* quickSort(int *vector, int left, int right) {
    int i, j, x, y;

    i = left;
    j = right;
    x = vector[(left + right) / 2];

    while(i <= j) {
        while(vector[i] < x && i < right) {
            i++;
        }
        while(vector[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = vector[i];
            vector[i] = vector[j];
            vector[j] = y;
            i++;
            j--;
        }
    }

    if(j > left) {
        quickSort(vector, left, j);
    }
    if(i < right) {
        quickSort(vector, i, right);
    }
  return vector;
}



void quick_sort_case(char *text, int *vector, int vector_size)
{
    clock_t start, end;

    start = clock();
    int *result = quickSort(vector, 0, vector_size);
    end = clock();
    printf("%s\n", text);

    printf("Tempo de execução da ordenação: %lfs\n", (double)(end - start)/CLOCKS_PER_SEC);
    printf("------------------\n");
}
