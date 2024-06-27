//Creating a program using functions
#include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int a=10,b=20;
	cout<<sum(a,b);
}



//creating a program using functions.-Prototyping

#include<iostream>
using namespace std;
int sum(int ,int);
int main(){
	int a=10,b=20;
	cout<<sum(a,b);
}
int sum(int a,int b){
	int c=a+b;
	return c;
}





// calculating total marks using functions.

#include<iostream>
using namespace std;
int calculate(){
	int sum=0;
	int val;
		int marks,total;
	int arr[6];
	cout<<"Enter the marks : ";
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
	for(int i=0;i<6;i++){
		val=arr[i];
		sum=sum+val;
		
		
	}
	return sum;
}
int main(){

	cout<<calculate()<<endl;	
}




