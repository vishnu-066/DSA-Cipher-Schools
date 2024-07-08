#include<iostream>
using namespace std;
void maxandmin(int *arr,int *large,int *small){
	//int large,small;
	*large=arr[0];*small=arr[0];
	for(int i=0;i<6;i++){
		if(*(arr+i)>*large)
		*large=*(arr+i);
	
	if(*(arr+i)<*small){
		*small=*(arr+i);
	}}
}


int main(){
	int arr[]={1,3,5,3,90,75};
	int max,min;
	maxandmin(arr,&max,&min);
	cout<<"Max : "<<max<<endl;
	cout<<"Min : "<<min<<endl;	
	return 0;
}




#include<iostream>
using namespace std;
void minandmax(int *arr,int *max,int *min){
	int large=arr[0];int small=arr[0];
	for(int i=0;i<7;i++){
		if(arr[i]>=large)
		large=arr[i];
		if(arr[i]<=small)
		small=arr[i];
	}
	*max=large;*min=small;
}

int main(){
	
	int arr[]={1,2,3,4,5,0,5};
	int max,min;
	minandmax(arr,&max,&min);
	cout<<max;
}





// 1) why we are not using *arr[i] for dereferencing
/*
arr[i] is equivalent to *(arr + i), where arr is a pointer to the first element of the array.
If you used *arr[i], this would be incorrect because arr[i] is already the value at the index i. Dereferencing it again (*arr[i]) 
would be invalid unless arr[i] itself were a pointer.
*/


// 2) why we cant use &arr int fuction call
/*
Using &arr would pass the address of the array as a whole, which is a pointer to an array type (int (*)[N]). 
This type is different from a pointer to the first element (int *). This difference in types leads to compilation errors or incorrect behavior.
*/
