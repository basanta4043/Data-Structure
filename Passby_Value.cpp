#include <iostream>
using namespace std;
void passByValue(int x, int y) //passed by value
{
    int z=x;
    x=y;
    y=z;
}
int main() {
  int a=5 ,b=6;
    cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
    passByValue(a,b);

    cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
    return 0;
}
