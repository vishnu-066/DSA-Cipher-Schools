#include<iostream>
using namespace std;
int main(){
	cout<<"size of int : "<<sizeof(int)<<endl;
	cout<<"size of short int : "<<sizeof(long int)<<endl;
	cout<<"size of long long int : "<<sizeof(long long int)<<endl;
	cout<<"size of float : "<<sizeof(float)<<endl;
	cout<<"size of char : "<<sizeof(char)<<endl;
	cout<<"size of double : "<<sizeof(double)<<endl;
	cout<<"size of bool : "<<sizeof(bool)<<endl;
	
	int a;long long int b;short c;char d;float e;bool f;
	cout<<"Address of a : "<<&a<<endl;
	cout<<"Address of b : "<<&b<<endl;
	cout<<"Address of c : "<<&c<<endl;
	cout<<"Address of d : "<<static_cast<void*>(&d)<<endl;
	cout<<"Address of e : "<<&e<<endl;
	cout<<"Address of f : "<<&f<<endl;
	return 0;
}
