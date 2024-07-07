#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	int *p;int *q;
	p=&a;q=&b;
	int *f;
	f=p;
	
	cout<<"value of a: "<<a<<endl;
	cout<<"Address of a: "<<p<<endl;
	cout<<"redirecting value of a: "<<*p<<endl;
	cout<<"value of b: "<<b<<endl;
	cout<<"Address of b: "<<q<<endl;
	cout<<"redirecting value of b: "<<*q<<endl;
	cout<<f;
	return 0;
}



#include<iostream>
using namespace std;
int main(){

int arr[5];
int *p;
for(int i=0;i<5;i++){
	p=&arr[i];
	cout<<p<<endl;
	cout<<*p<<endl;  // bcoz of uninitillizition it gives garbage value
}
return 0;
}




#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int *q;

	q=&arr[0];
	for(int i=0;i<5;i++){
		
		cout<<q<<endl;
		q++;
		
	}
	return 0;
}
