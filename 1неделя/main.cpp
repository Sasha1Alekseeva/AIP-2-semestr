 #include <iostream>
using namespace std;

int main()
{
    //Вывести на экран Первую букву имени из символов "*" (звездочка)
    cout << "   **** " << endl
         <<" *********"<<endl
         <<" ***   ***"<<endl
         <<" ***   ***"<<endl
         <<" *********"<<endl
         <<" *********"<<endl
         <<" ***   ***"<<endl
         <<" ***   ***"<<endl
         <<"****   ****"<<endl
         <<"****   ****"<<endl;
    /*Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:
        a. Круг*/
        float r, S,P;
        cout<<"Write radius r";
        cin>>r;
        P=2*3.14*r;
        S=3.14*r*r;
        cout<<"Perimeter= "<<P<<endl<<"Square= "<<S<<endl;
    /*Пользователь вводит два числа. Необходимо поменять значения переменных так,
чтобы значение первой оказалось во второй, а второй - в первой */
        float per1,per2,c;
        cout<<"write numbes";
        cin>>per1>>per2;
        c=per1;
        per1=per2;
        per2=c;
        cout<<"per1= "<<per1<<" per2= "<<per2;
   return 0;
}

