/* 3.Fazer o código fonte de programa para ler o comprimento e calcular o diâmetro, calcular o 
raio e finalmente a área de um círculo; ( Faça um menu com as opções necessárias, utilize 
goto ou while e switch case. ) */

#include "iostream"
#include "math.h"
#include "cstdlib"
#include "conio.h"
using namespace std;
double const pi = 3.14;
double lerValorComprimento(){
double Valor;
cout<<"digite o valor do comprimento da circuferencia do seu circulo: 
";
cin>>Valor;
return Valor;
}
double getDiametro (double vComprimento){
double vDiametro;
vDiametro = (vComprimento/(2 * pi)) * 2;
return vDiametro;
}
double getRaio (double vComprimento){
double vRaio;
vRaio = vComprimento/(2 * pi);
return vRaio;
}
double getArea (double vComprimento){
double vArea;
vArea = (vComprimento/(2 * pi)) * pi;
return vArea;
}
int main(int argc, char const *argv[])
{
double vA, vD, vC, vR;
int opcao;
vC = lerValorComprimento();
while (true)
{
cout << "Menu:\n";
cout << "1. Calcular diametro\n";
cout << "2. Calcular raio\n";
cout << "3. Calcular area\n";
cout << "4. Sair\n";
cout << "Escolha uma opção: ";
cin >> opcao;
switch (opcao){
case 1:
vD = getDiametro (vC);
cout<<"O diametro desse circulo eh: "<< vD<<"\n";
break;
case 2:
vR = getRaio(vC);
cout<<"O raio desse circulo eh: "<< vR<<"\n";
break;
case 3:
vA = getArea(vC);
cout<<"A Area desse circulo eh: "<< vA<<"\n";
break;
case 4:
return 0;
break;
default:
cout << "Opção inválida. Tente novamente.\n";
break;
}
}
return 0;
}
