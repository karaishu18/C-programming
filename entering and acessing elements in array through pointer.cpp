/*Write a C++ program to access the elements of an Array using pointers.*/

#include<iostream>
using namespace std;

int main(){
	int arr[5];
	int *p;
	p=arr;
	
	cout<<" Enter elements:";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	
	cout<<"\n";
	cout<<" You entered:";
	for(int i=0;i<5;i++){
		cout<<*p<<endl;
		p++;
	}
	
	return 0;
}
