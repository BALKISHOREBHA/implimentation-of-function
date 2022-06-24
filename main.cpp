
#include <iostream>


using namespace std;

int max(int x, int y);
int main(){
    int a = 700;
    int b = 200;
    int ret;
     ret = max(a,b);
    cout<< " max value is: "<<ret;
    return 0;
    
}
  int max(int x , int y){
    int result;
    if(x>y) 
    result = x;
    else result = y;
    return result;
}