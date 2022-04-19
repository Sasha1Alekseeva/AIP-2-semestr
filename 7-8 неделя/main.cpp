#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    //задача 1
/*
    int n;
    cin>>n;
    for(int k=0;k<=n;k++){
        cout<<" "<<endl;
        int i=0;
        while(i<k){
            cout<<"0";
            i++;
        }
    }
*/
    //задача 2
/*
    float y1,y2,h,a,b;
    cout<<"vvedite diapazon(a>0) i shag"<<endl;
    cin>>a>>b>>h;
    for(float x=a;x<=b;x+=h){
        y1=-0.23*x*x+x;
        y2=sqrt(15+4/x)+13*x+sin(3*x+13);
        cout<<x<<"\t"<<y1<<"\t"<<y2<<endl;
    }
*/
    //задача 4
/*
    float n,m,sh;
    cout<<"vvedite diapazon i shag"<<endl;
    cin>>n>>m>>sh;
    for(int i=n;i<=m;i+=sh){
        cout<<i<<"\t";
    }
*/
    //задача 5
/*
    int n,f=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        f*=i;
    cout<<f;
*/
    //    задача 3a
/*
    int x,n,y;
    cin>>x>>n;
    for(int i=1;i<=n;i++){
           y+=i*x;
    }
    cout<<y;
*/
    //задача 3е
/*
    float x,n,y=0,k=1;
    cin>>x>>n;
    int i=7;
    while(i<=n){
        if (i%2==0)
           y+=k/(i*x);
        if (i%2!=0)
           y+=-k/(i*x);
        k++;
        i++;
    }
    cout<<y;
*/
    return 0;
}
