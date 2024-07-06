#include<iostream>
using namespace std;
int main(){
	int a=10;
	char b=20;
	int *p=&a;
	char *q=&b;   // direct assignment
	cout<<"value of a : "<<a<<endl;
	cout<<"address of a "<<p<<endl;
	cout<<"value of b : "<<static_cast<int>(b)<<endl;
	cout<<"address of b : "<<static_cast<void*>(q)<<endl;
	return 0;
}

//method -2

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    char b = 'a';
    int *p = &a;
    void *temp = static_cast<void*>(&b);
    char *q = static_cast<char*>(temp);
    
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << p << endl;
    cout << "Value of b: " << b <<endl;
    cout << "Address of b: " << static_cast<void*>(q) << endl;
    
    return 0;
}

