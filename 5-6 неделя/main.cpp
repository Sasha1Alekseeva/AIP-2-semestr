#include <iostream>
#include<cmath>
using namespace std;

int main()
{ //Задание 1_А
//    float y,x;
//    cout<<"write x"<<endl;
//    cin>>x;
//    if (x>0){
//        y=2*x-10;
//    }
//    if(x==0){
//        y=0;
//    }
//    if(x<0){
//        y=2*fabs(x)-10;
//    }
//    cout<<"y= "<<y;
//Задание 1_D
//    float y,x;
//    cout<<"write x"<<endl;
//    cin>>x;
//    if (x>1){
//        y=3*x-7;
//    }
//    if(x==1){
//        y=3;
//    }
//    if(x<0){
//        y=3*fabs(x+2)-7;
//    }
//    cout<<"y= "<<y;
//Задание 2_а
//    float y,x,r,rc;
//    cout<<"write x and y"<<endl;
//    cin>>x>>y;
//    r=2;
//    rc=sqrt(x*x+y*y);
//    if ((rc>r)&&(y<x)&&(x<2))
//        cout<<"Yes"<<endl;ы
//    else
//        cout<<"No"<<endl;
//Задание 3_a
    float y,x,r,R,rc;
    cout<<"write x and y"<<endl;
    cin>>x>>y;
    r=1;R=2;
    rc=sqrt(x*x+y*y);
    if ((rc>r)&&(rc<R))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}
