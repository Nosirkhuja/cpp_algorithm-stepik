//Дано число 1<=n<=10^7, необходимо найти последнюю цифру nn-го числа Фибоначчи.

#include <iostream>

using namespace std; 


int main(){
	int n;
	cin>>n;
	int mas[3]={0,1,1};
	for(int i=1;i<n;i++){
		mas[2]=(mas[1]+mas[0])%10;
		mas[0]=mas[1];
		mas[1]=mas[2];
	}
	cout<<mas[2];
}
