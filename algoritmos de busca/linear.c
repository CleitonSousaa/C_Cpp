#include <stdio.h>

int buscaLinear(int array[], int tamanho, int alvo) {
    int i;
    for (i = 0; i < tamanho; i++) {
        if (array[i] == alvo) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int meuArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(meuArray) / sizeof(meuArray[0]);
    int elementoProcurado = 6;

    int resultado = buscaLinear(meuArray, tamanho, elementoProcurado);

    if (resultado != -1) {
        printf("Elemento %d encontrado no Indice %d.\n", elementoProcurado, resultado);
    } else {
        printf("Elemento %d não encontrado.\n", elementoProcurado);
    }

    return 0;
}


