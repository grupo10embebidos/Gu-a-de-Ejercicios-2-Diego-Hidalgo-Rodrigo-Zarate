#include <iostream>
#include <iomanip> //necessary for setprecision

using namespace std;

int main(){
  //Variable declaration
  double spm, tf, tc;
  //Data input
  cout << "Ingrese el numero de sonidos por minuto: " << endl;
  cin >> spm;
  //Equation fixed
  tc=(spm/4.0+8.0)/1.8;
  cout << "La temperatura es: " << setprecision(3) << tc << "°C" << endl;
  return 0;
}
