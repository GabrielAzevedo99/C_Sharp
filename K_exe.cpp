/* k) Elaborar um programa que efetue a apresenta��o do valor da convers�o em d�lar de um 
valor lido em real. O programa deve solicitar o valor da cota��o do d�lar e tamb�m a 
quantidade de reais dispon�vel com o usu�rio, para que seja apresentado o valor em moeda 
americana */

#include "iostream"
#include "math.h"
#include "cstdlib"
#include "conio.h"
using namespace std;
double lerValorReal(){
int Valor;
cout<<"digite quantos Reais voce tem: ";
cin>>Valor;
return Valor;
}
double lerValorCotDolar(){
int Valor;
cout<<"digite o valor da cota��o do dolar ";
cin>>Valor;
return Valor;
}
double getValorDolar (double Real, double CotDolar){
double ValorDolar;
ValorDolar = Real / CotDolar;
return ValorDolar;
}
void exibir (double ValorReal){
system ("cls");
cout<<"O valor em real eh: "<<ValorReal;
getch();
}
int main(void)
{
double vDolar, vCotDolar, vReal;
vReal = lerValorReal();
vCotDolar = lerValorCotDolar();
vDolar = getValorDolar (vReal, vCotDolar);
exibir (vDolar);
return 0;}
