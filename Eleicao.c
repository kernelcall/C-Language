#include <stdio.h>
#include <stdlib.h>

int voto;
int _votos;
int bolsonaro = 0;
int lula = 0;
int main(void)
{
    printf("Presidente: ");
    scanf("%d", &voto);
    if(voto == 13)
    {
        lula++;
        main();
    }
    else if(voto == 22)
    {
        ++bolsonaro;
        main();
    }
    else if(voto == 66)
    {
        _votos = bolsonaro + lula;
        printf("Total: %d\n", _votos);
        printf("Bolsonaro: %d\n", bolsonaro);
        printf("Lula: %d\n", lula);
        if(bolsonaro > lula)
        {
            printf("Bolsonaro ganhou\n");
        }
        else if(bolsonaro == lula){
            printf("Empate dos adversarios\n");
        }
        else
        {
            printf("Lula ganhou\n");
        }
    }
    else{
        printf("Opcao invalida\n");
    }
    return 0;
}
