#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;  
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                trocar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void imprimirArray(int arr[], int tamanho) {
    int i;  
    for (i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Funcao principal
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, tamanho);

    printf("Array ordenado: ");
    imprimirArray(arr, tamanho);

    return 0;
}


