// La línea estaba mal escrita <isotream>
#include <iostream>
using namespace std;
int main(){
int opcion;
bool cont = true;
do{
cout << "===Menú de operaciones ===" << endl;
cout << "1. Sumar dos numeros" << endl;
cout << "2. Restar dos numeros" << endl;
cout << "3. Multiplicar dos numeros" << endl;
cout << "4. Dividir dos numeros" << endl;
cout << "5. Calcular el promedio de varios numeros" << endl;
cout << "6. Salir" << endl;
cout << "Seleccione una opcion (1-6): ";
cin >> opcion;
switch(opcion){
case 1: {
int num1, num2;
cout << "ingrese un numero entero: " << endl;
cin >> num1;
cout << "ingrese otro numero entero: " << endl;
cin >> num2;
sum = num1 + num2 ;
cout << "La suma de : " << sum << endl;
break;
} 
case 2:{
break;
} 
}
}while(cont);
return 0;
}
 
