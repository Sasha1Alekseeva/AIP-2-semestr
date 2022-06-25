#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //1
    /*const int a=5;
    const int b=5;
    int mat1 [a] [b];
    for (int i=0; i<a;i++){
        for(int j=0;j<b;j++){
            mat1[i] [j]=rand()%20;
            cout<<mat1[i][j]<<"\t";
    }
        cout<<endl;
    }

    int min=mat1[0] [0];
    int ma=0;
    for (int i=0; i<a;i++)
        for(int j=0;j<b;j++)
            if(mat1[i] [j]<min){
                min=mat1[i] [j];
                ma=i;
            }

    for (int j=0;j<b;j++)
        mat1[ma] [j]= 0;

    cout<<endl;
    for (int i=0; i<a;i++){
        for(int j=0;j<b;j++)
            cout<<mat1[i][j]<<"\t";
        cout<<endl;
    }*/
    //5
    const int a=3;
    const int b=3;
    int mat2 [a] [b];
    for (int i=0; i<a;i++){
        for(int j=0;j<b;j++){
            mat2[i] [j]=rand()%10;
            cout<<mat2[i][j]<<"\t";
    }
        cout<<endl;
    }

    int min=mat2[0][0],mb=0;
    for (int i=0; i<a;i++){
        for(int j=0;j<b;j++){
            if(mat2[i][j]<min){
                min=mat2[i][j];
                mb=j;
            }
        }
        int m=mat2[i][i];
        mat2[i][i]=mat2[i][mb];
        mat2[i][mb]=m;
        min=mat2[i][0];
    }

    cout<<endl;
    for (int i=0; i<a;i++){
        for(int j=0;j<b;j++)
            cout<<mat2[i][j]<<"\t";
        cout<<endl;
    }
    //7
    /*
    const int a=2;
    const int b=7;
    int matday [a] [b];
        for (int i=0; i<a;i++)
            for(int j=0;j<b;j++){
                cin>>matday[i][j];
        }
      cout<<endl;
     int max=matday[1][0],mjveter=0,mjrain=0;
     for(int j=0;j<b;j++)
        if (matday[0][j]>max)
             mjrain=j;
     for(int j=0;j<b;j++)
        if (matday[1][j]>max)
             mjveter=j;
     if(mjveter==mjrain)
             cout<<"uragan bil";
    cout<<endl;
    for (int i=0; i<a;i++){
        for(int j=0;j<b;j++)
            cout<<matday[i][j]<<"\t";
        cout<<endl;

    }*/
    //10
    /*
    const int a = 3;
    const int b = 3;

    int number;
    cin>>number;
    int mat[a][b];

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            mat[i][j] = rand() % 20;

    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
         cout<<mat[i][j]<<' ';
    cout<<endl;

    //умножение
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
        mat[i][j] *= number;
        cout<<mat[i][j]<<' ';
        }
    }

    int matA[a][b];
    int matB[a][b];
    int matC[a][b];
    int matD[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matA[i][j] = rand() % 21;
            matB[i][j] = rand() % 21;
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cout << matA[i][j] << ' ';
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cout << matB[i][j] << ' ';
    cout << endl;
    }
    cout << endl;

    //сложение
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    //вычитание
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            matD[i][j] = matB[i][j] - matA[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cout << matC[i][j] << ' ';
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            cout << matD[i][j] << ' ';
        cout << endl;
    }

    //транспонирование
    int mattransp[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            mattransp[i][j] = rand() % 21;
        }
    }

    for (int i = 0; i < a; i++) {
         for (int j = 0; j < b; j++)
                cout << mattransp[i][j] << ' ';
         cout << endl;
        }

    int t;
    for(int i = 0; i < a; ++i){
        for(int j = i; j < b; ++j){
                t = mattransp[i][j];
                mattransp[i][j] = mattransp[j][i];
                mattransp[j][i] = t;
            }
    }
    for (int i = 0; i < a; i++) {
         for (int j = 0; j < b; j++)
                cout << mattransp[i][j] << ' ';
         cout << endl;
        }
    */
    //11
    /*
    int matnorm[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            matnorm[i][j]=rand()%21;
            cout<<matnorm[i][j]<<' ';
        }
    cout<<endl;
    }
    int sums[b];int sum;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            sum+=abs(matnorm[i][j]);
        sums[i]=sum;
        sum=0;
    }
    int max;
    max=sums[0];
    for(int i=0;i<a;i++)
        if(sums[i]>max)
            max=sums[i];
    cout<<endl;
    cout<<"norma= "<<max;
    */
}
