#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;       //string is also a type of  char arry.It is possible to access the elements in the string.
	cout<<"Enter your name : ";       //taking single string input
	cin>>a;							//using of cin ,it doesn't takes the space and next word.
	cout<<"Your name is : "<<a<<endl;        //displaying output.
	
	int l=a.length();     // finding the length of string.
	
	cout<<"Accessing of of elements "<<endl; 
	for(int i=0;i<l;i++){
		 //accessing of elemnts
		 
		cout<<a[i]<<endl;
	}
	
	
	string b;
	cout<<"Enter new input : ";
	cin>>b;
	cout<<"Your input is : "<<b<<endl;
	string c;
	c=a+b;
	
	cout<<"Displaying the two outputs : "<<a<<" "<<b<<endl;   	//displaying two outputs
	cout<<"Concatenation of two strings : "<<c<<endl;  		//sting concatenation................
	
	
	//Getting a string input with spaaces.
	
	string d;
	cout<<"Enter your input with spaces : ";
//	cin>>d;      // it take just frst string     /* eg : input : vishnu vardhan ........out put : vishnu */
	getline(cin,d);	 // it will take  whole input    /* eg : input : vishnu vardhan ..... out put : vishnu vardhan ..........*/
	cout<<"You entered input is : "<<d;
}
