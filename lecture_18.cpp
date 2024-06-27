//creating function - pass by value.
#include<iostream>
using namespace std;
void swap(int a,int b){
	int c;
	c=a;a=b;b=c;
	cout<<a<<" "<<b<<endl;
}
int main(){
	int a=10;int b=20;
	swap(a,b);
	cout<<a<<" "<<b;
}


//creating function - pass by reference.
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int c;
	c=a;a=b;b=c;
	cout<<a<<" "<<b<<endl;
}
int main(){
	int a=10;int b=20;
	swap(a,b);
	cout<<a<<" "<<b;
}

