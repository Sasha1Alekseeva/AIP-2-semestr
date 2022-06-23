#include<iostream>
#include<cmath>

struct Time {
    int hour, min, sek;
}time1, time2;

struct Robot {
    float size, speed, ves;
}Robot1, Robot2;

struct Datchik {
    float diapazon_min, diapazon_max, max_speed, pogresh;
}datchik1, datchik2;

struct PlaneRob {
    float rvinta, speed, ktagi;
}planeRob1,planeRob2;

struct Complex{
    float imag,real;
}z1,z2;

void sumTime(Time t1, Time t2);
void findRobot(Robot r1, Robot r2);
void showDatchik(Datchik d1, Datchik d2);
void findTiaga(PlaneRob rb1);
void showModul (Complex num1, Complex num2);

int main(){
    //1
    time1.sek = 46;
    time1.min = 10;
    time1.hour = 1;

    time2.sek = 59;
    time2.min = 15;
    time2.hour = 3;

    sumTime(time1, time2);

    //3
    Robot1.size = 60;
    Robot1.speed = 25;
    Robot1.ves = 65;

    Robot2.size = 95;
    Robot2.speed = 15;
    Robot2.ves = 85;

    findRobot(Robot1, Robot2);

    //8
    datchik1.diapazon_min = 25;
    datchik1.diapazon_max = 30;
    datchik1.max_speed = 15;
    datchik1.pogresh = 50;

    datchik2.diapazon_min = 32;
    datchik2.diapazon_max = 35;
    datchik2.max_speed = 9;
    datchik2.pogresh = 45;

    showDatchik(datchik1, datchik2);

    //10
    planeRob1.rvinta = 5;
    planeRob1.speed = 15;
    planeRob1.ktagi = 15;

    findTiaga(planeRob1);

    //2a
    showModul(z1,z2);
}

void sumTime(Time t1, Time t2) {
    int hour = 0, minuta = 0, sekynda = 0;
    sekynda = t1.sek + t2.sek;
    if (sekynda >= 60){
        minuta++;
        sekynda = sekynda % 60;
    }

    minuta += t1.min + t2.min;
    if (minuta >= 60){
        hour++;
        minuta = minuta % 60;
    }

    hour += t1.hour + t2.hour;
    std::cout << hour << ":" << minuta << ":" << sekynda << '\n';
}

void findRobot(Robot r1, Robot r2){
    if (r1.size < r2.size)
        std::cout << "Robot1" << " " << r1.size<<'\n';
    else
        std::cout << "Robot2" << " " << r2.size<<'\n';
}

void showDatchik(Datchik d1, Datchik d2){
    if (d1.diapazon_max - d1.diapazon_min > d2.diapazon_max - d2.diapazon_min)
        std::cout << "Datchik1" << " " << d1.diapazon_max - d1.diapazon_min<<'\n';
    else
        std::cout << "Datchik2" << " " << d2.diapazon_max - d2.diapazon_min<<'n';
}

void findTiaga(PlaneRob rb1){
    std::cout<<"Tiaga="<<' '<<rb1.ktagi*rb1.rvinta*rb1.speed<<'\n';
}

void showModul (Complex num1, Complex num2){
    float modul1,modul2;
    std::cin>>num1.imag>>num1.real>>num2.imag>>num2.real;
    modul1=sqrt(num1.imag*num1.imag+num1.real*num1.real);
    modul2=sqrt(num2.imag*num2.imag+num2.real*num2.real);
    std::cout<<modul1<<'\t'<<modul2;
}


