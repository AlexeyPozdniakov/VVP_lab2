#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    cout<<"Input coordinates of points"<<endl;
    int a,ac,bc,b,c,pr;
    cin>>a>>b>>c;
    if (((c>a)&&(c>b))||((c<a)&&(c<b))){
        cout<<"ERROR"<<endl;}
    else {
        ac=abs(a-c);
        bc=abs(b-c);
        pr=ac*bc;
    cout<<"Result="<<pr<<endl;
    }
    return 0;
}
