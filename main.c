#include <stdio.h>
#include <stdlib.h>
#include "vector_generator.c"
#include "shellsort.c"
#define MAX_VALOR 10000
#define NUM_ELEMENTS 10000


void show_menu(){
    system("clear");
    printf("------------------\n");
    printf("SELECIONE UMA OPÇÃO \n");
    printf("1 - Selection Sort \n");
    printf("2 - Insertion Sort \n");
    printf("3 - Bubble Sort \n");
    printf("0 - SAIR \n");
    printf("------------------\n");

}

void run_search_choice(int search_option)
{
    int *random_vector = aleatory_vector_generator(NUM_ELEMENTS, MAX_VALOR);
    int *best_case_vector = oriented_vector_generator(NUM_ELEMENTS, MAX_VALOR);
    int *worst_vector = worst_case_vector(NUM_ELEMENTS, MAX_VALOR);

    if (search_option == 1)
    {
      shellSort_sort_case("Ordenação de um vetor aleatório",random_vector, NUM_ELEMENTS);
      shellSort_sort_case("Melhor caso", best_case_vector, NUM_ELEMENTS);
      shellSort_sort_case("Pior caso", worst_vector, NUM_ELEMENTS);

    }
    // else if (search_option == 2)
    // {
    // }
    // else
    // {
    // }
}

int main(){
  int option;

  show_menu();
  scanf("%d", &option);
  run_search_choice(option);

  return 0;
}
