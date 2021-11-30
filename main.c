#include <stdio.h>
#include <stdlib.h>

void limpar(void)
{
    system("@cls||clear");
}

int main( void )
{
    float preco, valor;
    unsigned char qtd, taxa, cont;
    char produto[20];

    limpar();
    printf("========== Gerador de Preço ==========\n");
    printf("\nDigite o nome do produto: ");
    scanf("%s", &produto);
    printf("Digite o custo: ");
    scanf("%f", &valor);  // quando for executar o programa pesta atenção no valor que vc vai colocar aqui
    printf("Digite a taxa(%%): ");
    scanf("%d", &taxa);
    printf("Variavel Custo = %f", valor); // isso aqui é para mostrar q ate aqui o programa ta correto, mostrando o valor definido por vc.
    printf("\nDigite a quantidade: ");
    scanf("%d", &qtd);
    

    printf("\nProduto: %s, no valor R$%.2f com a taxa %d%%, quantidade %d \n", produto, valor, taxa, qtd);
    printf("Variavel Custo = %f\n", valor); // mas aqui ele responde um valor diferente daquele q vc colocou na variavel.

    return 0;
}