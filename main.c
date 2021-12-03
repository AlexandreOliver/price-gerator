#include <stdio.h>
#include <stdlib.h>

void limpar(void)
{
    system("@cls||clear");
}

int main( void )
{
    float preco, valor;
    short int qtd, taxa, cont;
    char produto[20];

    limpar();
    printf("========== Gerador de Preço ==========\n");
    printf("\nDigite o nome do produto: ");
    scanf("%s", &produto);
    printf("Digite o custo: ");
    scanf("%f", &valor);
    printf("Digite a taxa(%%): ");
    scanf("%hd", &taxa);
    printf("\nVariavel Custo = %f", valor);
    printf("\nDigite a quantidade: ");
    scanf("%hd", &qtd);
    

    printf("\nProduto: %s, no valor R$%.2f com a taxa %hd%%, quantidade %hd \n", produto, valor, taxa, qtd);
    printf("Variavel Custo = %f\n", valor);

    return 0;
}