#include <iostream>

int main ( ){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 0){
        printf("O número digitado é positivo. \n");   
    } else{
        printf("O numero digitado é negativo. \n");
    }
    return 0;

}