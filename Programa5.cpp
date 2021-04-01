#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

//Student's grades
int *rand_num(int n, int m){
  static int r[100];
  int i=0;
  srand(time(NULL));
  for (i=0;i<n;i++){
    r[i] = 1 + rand()%m; //from 1 to m, in this case m=6
  }
  return r;
}
//average of n integers up to 100
double average(int l[],int n){
  int i=0;
  double sumt=0.0;
  for (i=0;i<n;i++){
    sumt+=l[i];
  }
  sumt=sumt/n;
  return sumt;
}
//variance
double var(int c[], double av, int n){
  int i=0;
  double var=0;
  for(i=0;i<n;i++){
    var+=pow((c[i]-av),2.0);
  }
  var=var/n;
  return var;
}
//mode
int mode(int d[], int n){
  int i=0, j=0, cont1, cont2=0, mod;
  for(i=0;i<n;i++){
    cont1=0;
    for(j=0;j<n;j++){
      if(d[i]==d[j]){
        cont1+=1;
      }
    }
    if(cont1>cont2){
      cont2=cont1;
      mod=d[i];
    }
  }
  return mod;
}
int main(){
  int* p;
  int i=0, mod=0, n=25; //n=number of grades up to 100
  double stdv, av, va;
  p=rand_num(n,7);
  av=average(p, n);
  va=var(p, av, n);
  stdv=pow(va, 0.5);
  mod=mode(p, n);
  cout << "El promedio de las "<<n<<" notas es: "<<setprecision(3)<<av<<endl;
  cout << "La varianza es: "<<setprecision(3)<<va<<endl;
  cout << "La desviacion estandar es: "<<setprecision(3)<<stdv<<endl;
  cout << "La moda es: "<<mod<<endl;
  return 0;
}
