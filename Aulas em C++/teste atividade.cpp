#include <iomanip> 
#include <iostream> 
#include <limits> 
#include <conio.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
float PX = 1, PY = 2, PZ = 3;
float VPX = 12.99, VPY = 3.75, VPZ = 23.55;
float QNT_X, QNT_Y, QNT_Z;
float valor_total;
	
	cout <<"LISTA:" << endl;
	cout <<"	->1. Produto X = R$" << VPX << endl;
	cout <<" 	->2. Produto Y = R$" << VPY << endl;
	cout <<"	->3. Produto Z = R$" << VPZ << endl;

	cout<<"Escolha o produto" << endl;
	scanf("%f, %f, %f", &PX, &PY, &PZ)
	
	
	cout <<"Digite a quantidade de peças"<< endl;
	
return 0;
}