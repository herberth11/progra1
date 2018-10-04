//codigo fuente: Calculo del promedio de notas de cinco estudiantes
//estudiante: Herberth Ovidio Jurado Maradiaga
//carnet: JM18006
//codigo fuente: calculo del promedio de notas de cinco estudiantes
#include <cstdlib>
#include <iostream>
// libreria de entradas y salidas
#include <windows.h>

using namespace std;

int main (){
system("color f0");
Beep(988,678);
float notas [5];//declaramos el arreglo notas para recibir cinco valores de tipo flotante
float suma = 0;//declramos suma y la inicializamos en cero para poder sumar las notas ingresadas
float promedio;//en esta variable almacenaremos el resultado de la operacion
//realizada para obtener el promedio

for (int i=0; i<=4; i++){//este ciclo nos cervira para llenar las cinco posiciones del arreglo notas

do
{
cout << "ingrese las notas " << i+1<<endl;//utilizamos este ciclo para que si el
//usuario ingresa valores mayores que diez o menores a cero le vuelva a padir que ingrese las notas
cin >> notas [i];
}while ( notas[i] <=0 || notas[i] >=10);
suma = suma + notas[i];
//acumula la sumatoria de notas
}
promedio=suma/5;//se realiza la operacion para obtener le promedio que seria la suma entre el numero de notas
for (int i=0; i<=4; i++)//mediante este ciclo imprimimos los datos datos almacenados en notas
{
cout << "nota " << i+1 << ": " << notas [i] << endl;
}
cout << "el promedio es: " << promedio << endl;//imprimimos el promedio obtenido.
Beep(988,678);
system ("pause");
system ("cls");

return EXIT_SUCCESS;
}
