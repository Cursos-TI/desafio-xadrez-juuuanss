#include<stdio.h>


//recursividade da torre//

void movimentotorre(int torre){
   
    if (torre > 0)
    {
        printf("Direita.\n");
        movimentotorre(torre - 1);
    
   
    }
}

//recursividade da Rainha//


void movimentorainha(int rainha){

if (rainha > 0)
    {
        printf("Esquerda.\n");
        movimentorainha(rainha - 1);
    }

}

//recursividade do Bispo //

void movimentobispo(int bispo){
    if (bispo > 0)
    {
    printf("cima, esquerda.\n");
    movimentobispo(bispo - 1);
    }
}




int main(){

    printf("Movimentação da torre.\n");
    movimentotorre(5);
    printf("\n");


    printf("Movimentação da rainha.\n");
    movimentorainha(8);
    printf("\n");


    printf("Movimentação do Bispo\n");
    movimentobispo(5);
     printf("\n");


     printf("Movimentação do cavalo.\n");

     int cavalo;
     int i;
     cavalo = 1;

while (cavalo--)
{
    for ( i = 0; i < 2; i++)
    {
        printf("Cima\n");
    }
    printf("Direita.\n");
}

    return 0;
}