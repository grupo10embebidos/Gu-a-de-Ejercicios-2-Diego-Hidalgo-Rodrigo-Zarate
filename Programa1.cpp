#include <iostream>
using namespace std;

int main(){
  //Variable declaration
  int CLA, CAT, ANT, SAL, RES=1;
  //Data input
  cout << "Ingrese la clave: " << endl;
  cin >> CLA;
  cout << "Ingrese la categoria: "<< endl;
  cin >> CAT;
  cout <<"Ingrese la antiguedad: " << endl;
  cin >> ANT;
  cout << "Ingrese el salario: " << endl;
  cin >> SAL;
  //Conditions
  if ((( CAT == 3 || CAT ==4) && ANT>=5)||(ANT==7 && CAT==2)){
    cout << "El empleado cumple las condiciones, Resolucion: " << RES << endl;
  }
  else{
    RES=0;
    cout << "El empleado no cumple las condiciones, Resolucion: " << RES << endl;
  }
  return 0;
}
