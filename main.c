#include<stdio.h>
#include<stdlib.h>

int main(){
    int option;
    do{
        printf("*** MENU ***\n"
        "1- Gerar ABP\n"
        "2- Calcular Fator de Balanceamento\n"
        "3- Imprimir ABP\n"
        "4- Sair\n"
        "O que deseja fazer:\n"
        );
        scanf("%d",&option);
        switch (option){
        case 1:
            /* code */
            break;  
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */        
            break;
        default:
        printf("Digite novamente!\n");
        }
    }while(option != 4);

    return 0;
}