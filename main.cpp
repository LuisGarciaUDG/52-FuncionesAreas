/*
Programa_52

funciones con parametros con paso de valor.
Variables globales, prototipos, llamado de funciones automatico.
Suma y resta de dos números enteros.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 23 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void cuadrado (int x, int y);//prototipo
void rectangulo (int x, int y);//prototipo
int n1, n2, resp;//variables globales

int main()
{

    int opc;
    do
    {
    cout<<"\n\tPrograma de areas \n";
    cout<<"\n\n\t----------------------";
    cout<<"\n\n\t 1.- Area de cuadrado";
    cout<<"\n\n\t 1.- Area de rectangulo";
    cout<<"\n\n\t 3.- Salir";
    cout<<"\n\n\t Elige una opcion: ";
    cin>>opc;

    if (opc==1)
{
    cout<<"\n\tArea del cuadrado";
    cout<<"\n\n\tDame la base:   "; cin>> n1;
    cout<<"\n\n\tDame la altura: "; cin>> n2;
    cuadrado(n1,n2);
}
else if (opc==2)
{
    cout<<"\n\tArea del rectangulo";
    cout<<"\n\n\tDame la base:   "; cin>> n1;
    cout<<"\n\n\tDame la altura: "; cin>> n2;
    rectangulo(n1,n2);
}
else if (opc ==3)
{
    cout<<"\n\n\tHa elegido salir...\n\n\t";
    system("pause");
}

system ("cls");

    }while (opc!=3);
    return 0;
}

void cuadrado (int x, int y)
{

    resp=x*y;
    cout<<"\n\n\tEl resultado es: "<<resp<<"\n\n\t\t";
    system("pause");
}

void rectangulo (int x, int y)
{

    resp=x*y;
    cout<<"\n\n\tEl resultado es: "<<resp<<"\n\n\t\t";
    system("pause");
}
