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
void stat(const double A[],int N,double S[])
{
    double max=A[0],min=A[0];
    double sum=0,x=0,y=1;   
    for(int i=1;i<N;i++){
        if(A[i]>max) max=A[i];
        if(A[i]<min) min=A[i];
    }
    for(int i=0;i<N;i++){
        sum+=A[i];
    }
    for(int i=0;i<N;i++){
        x+=pow(A[i],2);
    }
    S[0]=sum/N;
    S[1]=sqrt((x/N)-pow(S[0],2));
    for(int i=0;i<N;i++){
        y*=A[i];
    }
    S[2]=pow(y,double(1)/N);
    sum=0;
    for(int i=0;i<N;i++){
        sum+= (1/A[i]);
    }
    S[3]=N/sum;
    S[4]=max;
    S[5]=min;
}
