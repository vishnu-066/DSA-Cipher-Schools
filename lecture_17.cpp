#include<iostream>
using namespace std;
int sum(int a,int b){
	
	int c=a+b;
	a=100;
	return c;
}
int main(){
	int a=10;
	int b=20;
	cout<<a<<" "<<sum(a,b);
	return 0;
}



int sum(int a,int b){
	int c=a+b;
	cout<<c<<endl;    //here value c is local so it will print 30
	return c;
	
}
int main(){
	int a=10,b=20,c=40;
	cout<<sum(a,b)<<endl<<c<<endl;    //here the value c is local,so it will print 40
	return 0;
}
