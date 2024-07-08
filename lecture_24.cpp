#include<iostream>
using namespace std;
void swap(int *p,int *q){
	int c=*p;
	*p=*q;
	*q=c;
	cout<<*p<<" "<<*q<<endl;
	
}
int main(){
	int a=10;
	int b=20;
	swap(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}


#include<iostream>
using namespace std;

void swap(int *p, int *q) {
    int temp1 = *p;
    int temp2 = *q;
    int temp = temp1;
    temp1 = temp2;
    temp2 = temp;
    cout << "Inside swap function: " << temp1 << " " << temp2 << endl;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "Before swap function: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap function: " << a << " " << b << endl;
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
//	cout<<arr<<endl;
	for(int i=0;i<5;i++){
		cout<<*(arr+i)<<"--"<<arr+i<<endl;
	}
	return 0;
}




//create a function and call the array inside the function.
/*
Define a function named printArray that takes two parameters: an integer array and its size.
In the printArray function, use a loop to print all elements of the array.
In the main function, define an integer array with some elements.
Call the printArray function from the main function, passing the array and its size as arguments.
*/

#include<iostream>
using namespace std;
void printarray(int *arr,int x){
	for (int i=0;i<x;i++){
		cout<<arr[i];
	}
}
int main(){
	int arr[]={1,2,3,4,5,6};
	printarray(arr,6);
	return 0;
}



#include<iostream>
using namespace std;
void func(int *a,int *max,int *min){
	int large=a[0];int small=a[0];
	for(int i=0;i<5;i++){
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
	}
	*max=large;*min=small;
	
}
int main(){
	int a[5];
	cout<<"Enter inputs : "<<endl;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
//	for (int i=0;i<6;i++){
//		a[i]=i+1;
//	}
	int max,min;
	func(a,&max,&min);
	cout<<"max : "<<max<<endl;
	cout<<"min : "<<min<<endl;
	
}

