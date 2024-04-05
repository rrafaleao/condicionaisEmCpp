#include <iostream>

int main ( ){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 10){
        printf("o número é maior que 10.\n");
    }

    if(num == 0){
        printf("o número é zero.\n");
    }

    if(num > 0){
        printf("O número digitado é positivo. \n");   
    } else{
        printf("O numero digitado é negativo. \n");
    }

  if(num % 2 == 0){
        printf("O número digitado é par. \n");
        
    } else{
        printf("O número digitado é impar. \n");
    }
    return 0;

}


