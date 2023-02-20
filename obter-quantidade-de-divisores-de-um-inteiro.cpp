// obter-quantidade-de-divisores-de-um-inteiro.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <locale>
#include <string>
using namespace std;

int obterQuantidadeDeDivisoresDeUmNumeroInteiro(int Numero);

int main()
{
	int Numero;
	cout << "Digite um numero para calcularmos a quantidade de divisores: ";
	cin >> Numero;
	cout << "A quantidade de divisores deste numero e: " << obterQuantidadeDeDivisoresDeUmNumeroInteiro(Numero);
}


int obterQuantidadeDeDivisoresDeUmNumeroInteiro(int Numero)
{
	int QuantidadeDeDivisores = 0;

	for (int i = 1; i <= Numero; i++)
	{
		if (Numero % i == 0)
		{
			QuantidadeDeDivisores++;
		}
	}

	return QuantidadeDeDivisores;

};

