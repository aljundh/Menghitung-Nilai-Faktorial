#include <iostream>
using namespace std;

int faktorial(int n);

int faktorial (int n){
	int hasil=1,i;
	for (i=n;i>0;i--){
		hasil = hasil * i;
	}
	return hasil;
}

int main(){
	
	int n, hasil;
	cout<<"Masukkan nilai : ";
	cin>>n;
	hasil = faktorial(n);
	cout<<n<<"! = "<< hasil;
	
	return 0; 
}
