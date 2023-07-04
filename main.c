#include <stdio.h>
#include <stdlib.h>
#include "TabelaHash.h"

int main(){
    aluno al;

    printf("Matricula:\n");
    scanf("%d", &al.matricula);
    printf("Nome:\n");
    scanf("%s", &al.nome);
    printf("Nota 1:\n");
    scanf("%f", &al.n1);

    Hash *ha = criaHash(1427);

    int x=insereHash_SemColisao(ha, al);
    int x = buscaHash_SemColisao(ha, mat, &al);

    liberaHash(ha);
    return 0;

}
