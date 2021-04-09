// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

float num1, num2;
float operacion;
int loop = 3;
int reset = 0;
int tiempo = 200;
int tiempo2 = 70;
char sexo = 'f';
int verde = 815;
int rojo = 715;
int amarillo = 615;
int blanco = 15;

void CambiarColor(int value) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void Separador()
{
	CambiarColor(blanco);
	cout << "\n\n=^..^=   =^..^=   =^..^=    =^..^=    =^..^=    =^..^=    =^..^=    =^..^=   =^..^=   =^..^=    =^..^=    =^..^=";
}

void ComprobarPeso()
{
	if (operacion < 20)
	{
		CambiarColor(rojo);
		cout << "\nEstas Desnutrido";
		cout << "\nResultado : " << operacion;
		Separador();
	}
	if ((operacion >= 20 && operacion < 25))
	{
		CambiarColor(verde);
		cout << "\nEstas normal";
		cout << "\nResultado : " << operacion;
		Separador();
	}
	if (operacion >= 25 && operacion < 30)
	{
		CambiarColor(amarillo);
		cout << "\nEstas gordita";
		cout << "\nResultado : " << operacion;
		Separador();
	}
	if (operacion > 30)
	{
		CambiarColor(rojo);
		cout << "\nSos un gorda";
		cout << "\nResultado : " << operacion;
		Separador();
	}
}

void ComprobarPeso2()
{
	if (operacion < 19)
	{
		CambiarColor(rojo);
		cout << "\nEstas Desnutrido";
		cout << "\nResultado : " << operacion;
		Separador();
	}
	if ((operacion >= 20 && operacion < 24))
	{
		CambiarColor(verde);
		cout << "\nEstas normal";
		cout << "\nResultado : " << operacion;
		Separador();
	}
	if (operacion >= 24 && operacion < 29)
	{
		CambiarColor(amarillo);
		cout << "\nEstas gordito";
		cout << "\nResultado : " << operacion;
		Separador();
	}
	if (operacion > 29)
	{
		CambiarColor(rojo);
		cout << "\nSos un gordo teton";
		cout << "\nResultado : " << operacion;
		Separador();
	}
}

void Cargando()
{
	Sleep(400);
	cout << "\n\nCargando  ";
	Sleep(tiempo2);
	cout << "\b\\";
	Sleep(tiempo2);
	cout << "\b|";
	Sleep(tiempo2);
	cout << "\b/";
	Sleep(tiempo2);
	cout << "\b-";
	Sleep(tiempo2);
	cout << "\b\\";
	Sleep(tiempo2);
	cout << "\b|";
	Sleep(tiempo2);
	cout << "\b/";
	Sleep(tiempo2);
	cout << "\b-";
	Sleep(tiempo2);
	cout << "\b\\";
	Sleep(tiempo2);
	cout << "\b|";
	Sleep(tiempo2);
	cout << "\b/";
	Sleep(tiempo2);
	cout << "\b-";
	Sleep(tiempo2);
	cout << "\b\\";
	Sleep(tiempo2);
	cout << "\b|";
	Sleep(tiempo2);
	cout << "\b/";
	Sleep(tiempo2);
	cout << "\b-";
	Sleep(tiempo2);
	cout << "\bListo";
	Sleep(400);
	loop = 1;
}

int main()
{
	SetConsoleTitle(TEXT("Calculadora De IMC"));
	std::cout << R"(
   ____           _                  _               _                            ____             ___   __  __    ____ 
  / ___|   __ _  | |   ___   _   _  | |   __ _    __| |   ___    _ __    __ _    |  _ \    ___    |_ _| |  \/  |  / ___|
 | |      / _` | | |  / __| | | | | | |  / _` |  / _` |  / _ \  | '__|  / _` |   | | | |  / _ \    | |  | |\/| | | |    
 | |___  | (_| | | | | (__  | |_| | | | | (_| | | (_| | | (_) | | |    | (_| |   | |_| | |  __/    | |  | |  | | | |___ 
  \____|  \__,_| |_|  \___|  \__,_| |_|  \__,_|  \__,_|  \___/  |_|     \__,_|   |____/   \___|   |___| |_|  |_|  \____|
	)" << '\n';
	Cargando();
	while(loop==1) 
	{ 
		//system("Color f");
		loop--;
		CambiarColor(blanco);
		cout << "\n\nIndique Sexo : ";
		cin >> sexo;
		if (cin && sexo == 'F' || sexo == 'f' || sexo == 'M' || sexo == 'm')
		{
			cout << "\n\nIntroduce el peso en kilogramos : ";
			cin >> num1;
			if (cin || reset == 1)
			{
				reset = 0;
				cout << "\nIntroduce la estatura en metros : ";
				cin >> num2;
				if (cin || reset==1)
				{
					//system("Color 2b");
					reset = 0;
					operacion = (num1) / (num2 * num2);
					if (sexo == 'M' || sexo == 'm')
					{
						ComprobarPeso();
						Sleep(tiempo);
						loop++;
					}
					if (sexo == 'F' || sexo == 'f')
					{
						ComprobarPeso2();
						Sleep(tiempo);
						loop++;
					}
				}
				else
				{
					CambiarColor(715);
				//system("Color 4b");
					cout << "\nError, Ingrese caracter valido";
					Sleep(tiempo);
					cin.clear();
				cin.ignore(10000, '\n');
					loop = 1;
				}
			}
			else
			{
				//system("Color 4b");
				CambiarColor(715);
				cout << "\nError, Ingrese caracter valido";
				Sleep(tiempo);
				cin.clear();
				cin.ignore(10000, '\n');
				loop = 1;
			}
		}
		else
		{
			//system("Color 4b");
			CambiarColor(715);
			cout << "\nError, Ingrese caracter valido";
			Sleep(tiempo);
			cin.clear();
			cin.ignore(10000, '\n');
			loop = 1;
		}
	}
	
	
}
