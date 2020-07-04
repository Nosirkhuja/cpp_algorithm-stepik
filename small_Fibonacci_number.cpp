//Дано целое число 1≤n≤40, необходимо вычислить nn-е число Фибоначчи

#include<iostream>

using namespace std;

int main(){
    int mas[40];
    mas[0]=0;
    mas[1]=1;
    for(int i=2; i<40; i++){
        mas[i]=mas[i-1]+mas[i-2];
    }
    int n;
    cin>>n;
    cout<<mas[n];
}
