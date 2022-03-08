#include <iostream>

using namespace std;

int main()
{
//   //Задача №8А (a+4b)(a−3b)+a^2 при a=2 и b=3. Ответ: -94
   int a,b,ans;
   a=2;
   b=3;
   ans=(a+4*b)*(a-3*b)+a*a;
   cout<<"answer= "<<ans;
   /*Задача №9А Сделать конвертер величин. Формат ввода: Направление_Перевода Величина:
 a. Длина (метры, версты, километры)*/
   int start_v,end_v;
   float m_ver,m_km,ver_m,ver_km,km_ver,km_m,val,result;
   result=0.0;
   m_ver=0.00094;
   m_km=0.001;
   ver_m=1066.8;
   ver_km=1.07;
   km_ver=0.94;
   km_m=1000;
   cout<<"Meters code=1 "<<"Verst code=2 "<<"Kilometers code=3"<<endl<<"Enter directoin, value ";
   cin>>start_v>>end_v>>val;
   if ((start_v==1)&&(end_v==2))
       result=val*m_ver;
   if ((start_v==1)&&(end_v==3))
       result=val*m_km;
   if ((start_v==2)&&(end_v==1))
       result=val*ver_m;
   if ((start_v==2)&&(end_v==3))
       result=val*ver_km;
   if ((start_v==3)&&(end_v==1))
       result=val*km_m;
   if ((start_v==3)&&(end_v==2))
       result=val*km_ver;
   cout<<"result= "<<result;
    //Задание 10 Вводятся три целых числа. Определить какое из них наибольшее
   int num1,num2,num3;
   cout<<"Write three numbers"<<endl;
   cin>> num1>> num2>>num3;
   int max;
   max=num1;
   if (num2>max)
       max=num2;
   if (num3>max)
       max=num3;
   cout<<"Max= "<<max;
    return 0;
}
