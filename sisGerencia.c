// bibliotecas usadas no código
#include <stdio.h>
#include <stdlib.h>

//estrutura do tipo cliente
typedef struct {
    int id_cliente;
    char nome[40];
    char endereco[50];
    int  telefone;
    char data_cadastro[15];
    int num_documento;
} cliente;

//estrutura do tipo fornecedor
typedef struct {
    int id_fornecedor;
    char nome[40];
    char endereco[50];
    int telefone;
} fornecedor;

//Estrutura do tipo produto
typedef struct {
    int id_produto;
    char descricao[30];
    int estoque_minimo;
    int qntd_atual;
    double valor_custo;
    double percentual_lucro;
    double valor_venda;
} produtos;

//estrutura do tipo Contas à receber
typedef struct {
    int nota_fiscal;
    cliente cliente_que_comprou;
    produtos produtos_comprados;
    char data_venda[15];
    int qntd_vendida;
    char meio_pagamento[10];
    double valor_venda;
} contas_receber;

//estrutura do tipo Contas à pagar
typedef struct {
    produtos codigo_do_produto; 
    fornecedor fornecedor_do_pedido;
    char data_compra[15];
    produtos tipo_produto[20];
    int qntd_compra;
    double valor_pago;
} contas_pagar;

//Função de cadastro do cliente
cliente cadastro_cliente (cliente cli) {
    printf("Digite o CPF ou CNPJ do cliente:");
    scanf("%d%*c", &cli.id_cliente);
    printf("Digite o nome do cliente:");
    scanf("%s%*c", &cli.nome);
    printf("Digite o endereco cliente:");
    scanf("%s", &cli.endereco);
    printf("Digite o telefone do cliente:");
    scanf("%d", &cli.telefone);
    printf("Digite a data do cadastro:");
    scanf("%s", &cli.data_cadastro);
    printf("Digite o RG ou IE do cliente:");
    scanf("%d", &cli.num_documento);
}

//Função de cadastro de fornecedor
fornecedor cadastro_fornecedor (fornecedor forn) {
    printf("Digite o CNPJ do fornecedor:");
    scanf("%d%*c", &forn.id_fornecedor);
    printf("Digite o nome do fornecedor:");
    scanf("%s%*c", &forn.nome);
    printf("Digite o endereco do fornecedor:");
    scanf("%s", &forn.endereco);
    printf("Digite o telefone do fornecedor:");
    scanf("%d", &forn.telefone);
}

produtos cadastro_produtos (produtos prod){
    printf("");
}

//Função principal
int main() {
    cliente cli;
    cadastro_cliente(cli);
    printf("Hello World");

    return 0;
}
