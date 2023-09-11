/* i) Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do 
primeiro valor pelo segundo. */

#include "iostream"
#include "math.h"
#include "cstdlib"
#include "conio.h"
using namespace std;
int lerValorA(){
int Valor;
cout<<"digite o valor de A ";
cin>>Valor;
return Valor;
}
int lerValorB(){
int Valor;
cout<<"digite o valor de B ";
cin>>Valor;
return Valor;
}
double getSubtracao (double A, double B){
double Sub;
Sub = A - B;
return Sub;
}
void exibir(int Resultado, int Sub){
system("cls");
Resultado = sqrt (Sub);
cout<<"O Resultado eh: "<<Resultado;
getch();
}
int main(void)
{
int vA, vB, vSub, vResultado;
vA = lerValorA();
vB = lerValorB();
vSub = getSubtracao (vA, vB);
exibir(vResultado, vSub);
return 0;
}
