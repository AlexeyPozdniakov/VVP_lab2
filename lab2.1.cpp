#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float x1,x2,y1,y2,p;
    cout<<"Input coordinates of 1 point:"<<endl;
    cin>>x1>>y1;
    cout<<"Input coordinates of 2 point:"<<endl;
    cin>>x2>>y2;
    p=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"Distance="<<p<<endl;
    return 0;
}
