#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Prototipo de funções
void _pedido(void);
void _queijo(void);
void _molho(void);
void g_pedido(void);

//VariaveisGlobais
char pao[10];
char queijo[10];
char molho[10];

int main(void)
{
    char c_pedido[10];
    printf("Hamburgueria SysOS\n");
    printf("Iniciar pedido?: ");
    scanf("%s", c_pedido);
    if((strcmp(c_pedido, "sim") == 0) || (strcmp(c_pedido, "Sim") == 0))
    {
        _pedido();
    }
    return 0;
}
void _pedido(void)
{
    printf("\n");
    printf("Escolha um tipo de pao\n");
    printf("Linux\n");
    printf("Windows\n");
    printf("MacOS\n");
    printf("Opcao: ");
    scanf("%s", pao);
    if((strcmp(pao, "linux") == 0) || (strcmp(pao, "Linux") == 0))
    {
        _queijo();
    }
    else if((strcmp(pao, "windows") == 0) || (strcmp(pao, "Windows") == 0))
    {
        printf("ESQUECE WINDOWS SEU MERDA\n");
    }
    else if((strcmp(pao, "macos") == 0) || (strcmp(pao, "MacOs") == 0))
    {
        _queijo();
    }
    else
    {
        printf("Opcao invalida... Tente novamente mais tarde!");
        exit(1);
    }
}
void _queijo(void)
{
    printf("\n");
    printf("Escolha um tipo de queijo\n");
    printf("Unix\n");
    printf("WindowsNT\n");
    printf("Xnu\n");
    printf("Opcao: ");
    scanf("%s", queijo);
    if((strcmp(queijo, "Unix") == 0) || (strcmp(queijo, "unix") == 0))
    {
        _molho();
    }
    else if((strcmp(pao, "Linux") == 0) && (strcmp(queijo, "WindowsNT") == 0))
    {
        printf("PORRA... ESCOLHE O PAO LINUX E QUER O QUEIJO WINDOWSNT? VSF\n");
    }
    else if((strcmp(queijo, "windowsNT") == 0) || (strcmp(queijo, "WindowsNT") == 0))
    {
        _molho();
    }
    else if((strcmp(queijo, "Xnu") == 0) || (strcmp(queijo, "xnu") == 0))
    {
        _molho();
    }
    else
    {
        printf("Opcao invalida... Tente novamente mais tarde!");
        exit(1);
    }
}
void _molho(void)
{
    printf("\n");
    printf("Escolha um tipo de molho\n");
    printf("OpenSource\n");
    printf("Microsoft\n");
    printf("Apple\n");
    printf("Opcao: ");
    scanf("%s", molho);
    if((strcmp(molho, "OpenSource") == 0) || (strcmp(molho, "opensource") == 0))
    {
        g_pedido();
    }
    else if((strcmp(molho, "Microsoft") == 0) || (strcmp(molho, "microsoft") == 0))
    {
        g_pedido();
    }
    else if((strcmp(molho, "Apple") == 0) || (strcmp(molho, "apple") == 0))
    {
        g_pedido();
    }
    else
    {
        printf("Opcao invalida... Tente novamente mais tarde!");
        exit(1);
    }
}
void g_pedido()
{
    printf("\n");
    printf("====================\n");
    printf("Pedido: 505\n");
    printf("Pao: %s\n", pao);
    printf("Queijo: %s\n", queijo);
    printf("Molho: %s\n", molho);

}

