#include <iostream>
using namespace std;
void passByReference(int &x, int &y) //passed by Reference
{
    int z=x;
    x=y;
    y=z;
}
int main() {
  int a=5 ,b=6;
    cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
    passByReference(a,b);

    cout<<"before swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl;
    return 0;
}
