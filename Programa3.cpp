#include <iostream>
#include <ctime>
#include <cstdlib>
#include <bitset>

using namespace std;

int main(){
  int i;
  static int on_off[8];
  static int array[256];
  //generating random array 0-255
  srand(time(NULL));
  for(i=0;i<256;i++){
    array[i]=rand()%256;
  }
  //first number in array in binary 8-bits
  bitset<8> leds(array[0]);
  cout << "Numero entero: " << array[0] << " - " << "Conversion a binario: " << leds << endl;
  //binary chain separated by spaces
  for (i=7;i>=0;i--){
    cout << leds[i] << " ";
  }
  cout << "\n";
  //led status
  for(i=7;i>=0;i--){
    if(leds[i]==0){
      cout << "Led " << 7-i << ": OFF" << endl;
    }
    else{
      cout << "Led " << 7-i << ": ON" << endl;
    }
  }
  return 0;
}
