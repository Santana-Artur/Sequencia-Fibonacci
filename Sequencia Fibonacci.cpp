#include <stdio.h>

int main() {
    int Termo1 = 0;
    int Termo2= 1;
    int Termo3= 0;
    int valor;
    printf("Insira o valor que deseja consultar na sequencia:");
    scanf("%d",&valor);
   
    while (valor > Termo3){
        Termo3 = Termo1+Termo2;
        Termo1 = Termo2;
        Termo2 = Termo3;
    }
    if (valor==0) {
        printf ("O valor está na sequencia");
}
    if (valor==1){
        printf ("O valor está na sequencia");
    }
    else if (valor==Termo3){
    printf("O numero faz parte da sequência de Fibonacci.") ;  
    }
    else {printf("O valor nao faz parte da Sequencia");
       
    }
    return 0;
}
