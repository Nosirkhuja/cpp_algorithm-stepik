//По данным двум числам 1<=a,b<=2*10^9 найдите их наибольший общий делитель.

#include <iostream>

using namespace std; 

int eucld(int a, int b){
	if (a==0) return b;
	if (b==0) return a;
	else if (a>=b){
		return eucld(a%b,b);
	}
	else if (b>=a){
		return eucld(a,b%a);
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<eucld(a,b); 

}
