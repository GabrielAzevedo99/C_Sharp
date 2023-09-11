/* l) Elaborar um programa que efetue a leitura de três valores (A, B e C) e apresente como 
resultado final à soma dos quadrados dos três valores lidos */

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
int lerValorC(){
int Valor;
cout<<"digite o valor de C ";
cin>>Valor;
return Valor;
}
double getQuadrado (double vLetra){
double vQuadrado;
vQuadrado = sqrt(vLetra);
return vQuadrado;
}
void exibir(int Resultado, int QA, int QB, int QC){
system("cls");
Resultado = QA + QB + QC;
cout<<"O Resultado eh: "<<Resultado;
getch();
}
int main(void){
int vA, vB, vC, QA, QB, QC, vResultado;
vA = lerValorA();
vB = lerValorB();
vC = lerValorC();
QA = getQuadrado (vA);
QB = getQuadrado (vB);
QC = getQuadrado (vC);
exibir(vResultado, QA, QB, QC);
return 0;
}
