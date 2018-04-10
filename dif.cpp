#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
  float y =1;
  float x = 0;
  float h=0.1;
  int i=0;  
  int N=3/h;
  for (i=0;i<N;i++){
    x= x + h;
    y= y - h*y;
    cout << x << " " << y  << endl;
    
  }


  return 0;
}
