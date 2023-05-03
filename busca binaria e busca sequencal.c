//# ExerciciosEmC//
// aqui começa a busca Binaria//
#include <stdio.h>

int buscaBinaria(int itemProcurado, int lista[], int tamanhoLista);

int main() {
    int lista[] = {2, 4, 5, 6, 8};
    int tamanhoLista = 5;
    int itemProcurado = 6;
    int posicao = buscaBinaria(itemProcurado, lista, tamanhoLista);
    
    if (posicao == -1) {
        printf("O item %d não está na lista.\n", itemProcurado);
    } else {
        printf("O item %d está na posição %d da lista.\n", itemProcurado, posicao);
    }
    
    return 0;
}

int buscaBinaria(int itemProcurado, int lista[], int tamanhoLista) {
    int esquerda = 0;
    int direita = tamanhoLista - 1;
    
    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        
        if (lista[meio] == itemProcurado) {
            return meio;
        } else if (lista[meio] < itemProcurado) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    
    return -1; // Retorna -1 se o item não está na lista
}
//aqui termina a busca binaria//


//aqui começa a busca sequencial//
#include <stdio.h>

int buscaSequencial(int itemProcurado, int lista[], int tamanhoLista);

int main() {
    int lista[] = {2, 4, 5, 6, 8};
    int tamanhoLista = 5;
    int itemProcurado = 6;
    int posicao = buscaSequencial(itemProcurado, lista, tamanhoLista);
    
    if (posicao == -1) {
        printf("O item %d não está na lista.\n", itemProcurado);
    } else {
        printf("O item %d está na posição %d da lista.\n", itemProcurado, posicao);
    }
    
    return 0;
}

int buscaSequencial(int itemProcurado, int lista[], int tamanhoLista) {
    for (int i = 0; i < tamanhoLista; i++) {
        if (lista[i] == itemProcurado) {
            return i; // Retorna a posição do item na lista
        }
    }
    
    return -1; // Retorna -1 se o item não está na lista
}


//aqui termina a busca sequencial//
