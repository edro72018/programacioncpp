// Estaba mal escrito <iostream>
// La línea estaba mal escrita <isotream>
#include <iostream>
using namespace std;
int main(){
int opcion;
do{
    // Estaba mal escrito endl
    cout << "===Menú de operaciones ===" << endl;
    // Estaba mal escrito endl
    cout << "1. Sumar dos numeros" << endl;
    // Estaba mal escrito endl
    cout << "2. Restar dos numeros" << endl;
    cout << "3. Multiplicar dos numeros" << endl;
    // Estaba mal escrito endl
    cout << "4. Dividir dos numeros" << endl;
    // Estaba mal escrito endl
    cout << "5. Calcular el promedio de varios numeros" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opcion (1-6): ";
    cin >> opcion;
    
    switch(opcion){
        case 1: {
            int num1, num2;
            cout << "ingrese un numero entero" << endl;
            cin >> num1;
            cout << "ingrese otro numero entero" << endl;
            //el cin debe ir con dos signos de mayor que >>
            cin >> num2;
            //En la línea había algunos >> y es <<
            cout << "La suma de " << num1 << " y " << num2 << " es: " << (num1+num2) << endl;
            break;
            }
        case 2: {
            int num1, num2;
            // Debe ser << y no >>
            cout << "Ingrese un numero entero: ";
            // Debe ser >> y no <<
            cin >> num1;
            // Debe ser << y no >>
            cout << "Ingrese otro numero entero: ";
            cin >> num2;
            // EN la línea habían >> en lugar de <<
            cout << "La restas de " << num1 << " y " << num2 << " es: " << (num1 - num2) << endl;
            break;     
            }
        case 3: {
            int num1, num2;
            // Debe ser << y no >>
            cout << "Ingrese un numero entero: ";
            // Debe ser >> y no <<
            cin >> num1;
            // Debe ser <<  y no >>
            cout << "Ingrese otro numero entero: ";
            cin >> num2;
            // Debe ser << y no >>
            cout << "La multiplicacion de " << num1 << " y " << num2 << " es: " << (num1 * num2) << endl;
            break; 
            }
        case 4: {
            double num1, num2;
            cout << "Ingrese un numero decimal: ";
            //Estaba mal escrita la variable num1 (nm1)
            cin >> num1;
            cout << "Ingrese otro numero decimal: ";
            //Estaba mal escrita la variable num2 (nu2)
            cin >> num2;
            if (num2 != 0){
                //Estaba mal terminada la línea (enl) 
                cout << "La division de " << num1 << " y " << num2 << " es: " << (num1/num2) << endl;
            }else{
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            //Estaba mal escrito break (brek)
            break; 
            }
        case 5: {
            //se corrigió el nombre de la variable de cantidd a cantidad
            int cantidad;
            cout << "¿Cuántos numeros desea promediar?";
            cin >> cantidad;
            double suma = 0;
            for(int i = 0; i < cantidad; ++i){
                // había <<endl innecesario
                double numero;
                cout << "ingrese un numero decimal: ";
                // Había un endl innecesario
                cin >> numero;
                suma = suma + numero;
            }
            // La declaración de la variable estaba errónea
            double promedio = suma / cantidad;
            cout << "El promedio es: " << promedio << endl;
            // Estaba mal escrito break (brek)
            break;
        }
        case 6: {
            cout << "Saliendo del programa. ¡Adios!" << endl;
            // Estaba mal escrito break (brak)
            break;
        //Estaba mal escrito default (defoult)
        }
        default: {
            // El endl estaba mal escrito
            cout << "Opcion valida. Por favor, seleccione de nuevo. " << endl;
            break;
        }
        /* Al parecer le faltaba las llaves { } a el case 6 y el default
        Pero se agregaron por tener el código más ordenado*/
        }
        // Estaba mal escrito endl (enld)
        cout << endl;
// Estaba mal escrito while (wile)
}while(opcion != 6);
return 0;
}
