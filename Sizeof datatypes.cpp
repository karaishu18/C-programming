/*Write a C++ program to find size of int,float,double and char in your system.*/

#include<iostream>
using namespace std;

int main(){
	int intType;
	float floatType;
	double doubleType;
	char charType;
	
	cout<<"Size of int: "<<sizeof(intType)<<"bytes\n";
	cout<<"Size of float: "<<sizeof(floatType)<<"bytes\n";
	cout<<"Size of double: "<<sizeof(doubleType)<<"bytes\n";
	cout<<"Size of char: "<<sizeof(charType)<<"byte\n";
	
	return 0;
}
