/*Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo de uma das
seguintes m�dias de acordo com um valor num�rico digitado pelo usu�rio e mostrado na tabela
a seguir:*/

#include <stdio.h>
#include <math.h>


int main(){
	
    int n[3];
    float calculo;
    
    printf("Me forne�a os 3 numeros tendo em mente que o ultimo so pode ser 1 ,2 ,3 :");
    scanf("%d%d%d",&n[0],&n[1],&n[2]);
    
    if(n[2] == 1){
        calculo =n[0] * n[1] * n[2];
        printf("De acordo com a media geometrica o resultado e : %.2f",calculo);
    }
    else if (n[2] == 2)
    {
        calculo =((n[0]+2) * (n[1]+3) * n[2])/6;
        printf("De acordo com a media ponderada o resultado e : %.2f",calculo);
    }
    else if (n[2] == 3)
    {
        calculo = 1/((1/n[0]) + (1/n[1]) + (1/n[2]));
        printf("De acordo com a media harmonica o resultado e : %.2f",calculo);
    } else if (n[2] == 3)
    {
        calculo = (n[0] + n[1] + n[2])/3;
        printf("De acordo com a media aritimetica o resultado e : %.2f",calculo);
    }else {
        printf("Lembrece o segundo numero so pode se 1 , 2 , 3");
    } 
}
