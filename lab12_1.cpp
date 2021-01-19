#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double score[],int f,double point[]){
    for(int i =0;i<f;i++){
        point[0]+=score[i];
    }
    point[0]=point[0]/f;
    for(int i =0;i<f;i++){
        point[1]+=pow(score[i]-point[0],2);
    }
    point[1]=sqrt((point[1]/f));
    point[2]=1;
    for(int i =0;i<f;i++){
        point[2]*=score[i];}
      double k =f;
        point[2]=pow(point[2],1/k);
    for(int i =0;i<f;i++){
        point[3]+=(1/score[i]);
    }
     point[3]=f/point[3];
      double max =score[0];
    for(int i =1;i<f;i++){
        if(score[i]>max){
            max=score[i];
            point[4]=score[i];
        }
    }
    double min =score[0];
     for(int i =1;i<f;i++){
        if(score[i]<min){
           min=score[i];
           point[5]=score[i];
        }
    }
        
}
