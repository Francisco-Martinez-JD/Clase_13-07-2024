#include <iostream>
using namespace std;
int main(){
double horas=0, salario, total;
string nombre;
    cout<< "Ingrese su nombre completo: \n";
    cin >> nombre;
    cout<< "Ingrese la cantidad de horas trabajadas: \n";
    cin >>horas;
    if (horas<=160)
    {  salario=horas*10;
                }
    else {
        salario=1600 + (horas-160)*15;
    }
    if (salario<=2000)
    {   
                cout << nombre << ", su salario total es de \n" << salario << " dolares. \n";
    } 
    else if ( 2000<salario && salario<=2200)
    {
        total = salario-salario*0.2;
        cout << nombre << ", su salario total es de \n" << total << " dolares. \n";
    }
    else { 
        double total = salario-salario*0.3;
        cout << nombre << ", su salario total es de \n" << total << " dolares. \n";
    }
    
    return 0;
}