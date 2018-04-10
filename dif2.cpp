#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
  float y0 =1;
  float x0 = 0;
  float z0 = 0;
  float h=0.1;
  int i=0;  
  int N=10/h;
  for (i=0;i<N;i++){
    x0=x0+h;
    y0=y0-h*z0;
    z0=z0+h*y0;
    
    cout << x0 << " " << y0  << " " << z0 << endl;
    
  }


  return 0;
}
