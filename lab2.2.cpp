#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    cout<<"Input coordinates of points"<<endl;
    int a,b,c,ac,bc,sum;
    cin>>a>>b>>c;
    ac=abs(a-c);
    bc=abs(c-b);
    sum=ac+bc;
    cout<<"AC="<<ac<<", BC="<<bc<<", SUMM="<<sum<<endl;
    return 0;
}
