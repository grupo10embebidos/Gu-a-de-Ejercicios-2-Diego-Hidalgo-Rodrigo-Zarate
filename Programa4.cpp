#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//array of 24 random numbers
int *rand_num(int n, int m){
  static int r[100];
  int i;
  srand(time(NULL));
  for (i=0;i<n;i++){
    r[i] = rand()%m; // Range of temperature 0°-m°
  }
  return r;
}
//average of n integers, up to 100
double average(int r[],int n){
  int i;
  double sumt;
  for (i=0;i<n;i++){
    sumt+=r[i];
  }
  sumt=sumt/n;
  return sumt;
}
//from integers to hours
string hour(int n){
  string str="";
  n+=1;
  if (n==24){
    str="00:00";
  }
  if (24>n && n>=9){
    str=to_string(n+1)+":00";
  }
  if (10>n && n>=1){
    str="0"+to_string(n+1)+":00";
  }
  return str;
}

int main(){
  int i;
  int* p;
  double av;
  int max=0,min=100,hmax,hmin;
  p = rand_num(24,35);
  av = average(p,24);
  for(i=0;i<24;i++){
    if(p[i]>max){
      max=p[i];
      hmax=i;
    }
    if (p[i]<min){
      min=p[i];
      hmin=i;
    }
  }
  cout << "La temperatura promedio fue: "<<setprecision(4)<<av<<"°C"<<endl;
  cout << "La temperatura maxima fue: "<<max<<" a las : "<<hour(hmax)<<endl;
  cout << "La temperatura minima fue: "<<min<<" a las : "<<hour(hmin)<<endl;
  return 0;
}
