/*Fa�a um programa que calcule e mostre a �rea da superf�cie e o volume de uma
esfera sendo fornecido o valor de seu raio (R). A f�rmula para calcular o volume �:
(4/3) * pi * R�. A f�rmula para calcular a �rea �: 4 * pi * R�. Considere (atribua)
para pi o valor 3.14159. Use o conceito de constante Dica: Ao utilizar a f�rmula,
procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
assumem que o resultado da divis�o entre dois inteiros � outro inteiro.*/

#include<stdio.h>
#include<math.h>
#define PI 3.14159

int main(){
	
	double raio, volume, area;
	
	printf("Digite o valor do Raio: ");
	scanf("%lf", &raio);
	
	volume = (4.0/3) * PI * raio * raio * raio;
	area = 4 * PI * raio * raio;
	
	printf("Valor do volume: %.5lf\n", volume);
	printf("Valor da area: %.5lf", area);
}
