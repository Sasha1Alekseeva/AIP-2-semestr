#include <iostream>
#include <cmath>

void RectPS(float x1,float y1,float x2,float y2,float& P,float& S);
void ShiftLeft3(float& a,float& b,float& c);
void TimeToHMS(int T,int& H,int& M,int& S);
void Funk(int x,int& fx);

int main(){
    //Задача 2
//    float Perimetr=0,Square=0,X1,X2,Y1,Y2;
//    for (int i=0;i<3;i++){
//        std::cin>>X1>>Y1>>X2>>Y2;
//        RectPS(X1,Y1,X2,Y2,Perimetr,Square);
//        std::cout<<Perimetr<<" "<<Square<<"\n";
//    }
    //Задача 7
//    float a1,b1,c1,a2,b2,c2;
//    std::cin>>a1>>b1>>c1
//             >>a2>>b2>>c2;
//    ShiftLeft3(a1,b1,c1);
//    ShiftLeft3(a2,b2,c2);
//    std::cout<<a1<<b1<<c1<<"\n"
//             <<a2<<b2<<c2;
    //Задача 13
//    for(int i=0;i<5;i++){
//        int Tn,Hn=0,Mn=0,Sn=0;
//        std::cin>>Tn;
//        TimeToHMS(Tn,Hn,Mn,Sn);
//        std::cout<<Hn<<" "<<Mn<<" "<<Sn<<"\n";
//    }
    //Задача 16
    for(int xn=0;xn<9;xn++){
        int y=0;
        Funk(xn,y);
        std::cout<<xn<<"\t"<<y<<"\n";
    }
}

void RectPS(float x1,float y1,float x2,float y2,float& P,float& S){
    float a,b;
    a=y2-y1;
    b=x2-x1;
    P=2*(a+b);
    S=a*b;
}

void ShiftLeft3(float& a,float& b,float& c){
    float place1=a;
    a=b;
    b=c;
    c=place1;
}

void TimeToHMS(int T,int& H,int& M,int& S){
    if (T>=3600)
        H=T/3600;
    if((T-3600*H!=0))
        M=(T-3600*H)/60;
    if(T-3600*H-M*60!=0)
        S=T-(3600*H)-(M*60);
}

void Funk(int x,int& fx){
    if(x>2)
        fx=2*x-15;
    if(x==2)
        fx=5;
    if(x<2)
        fx=3*abs(x-1)-8;
}
