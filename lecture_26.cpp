//using char array...........................

#include<iostream>
using namespace std;
int main(){
	char name[1000];
	
int i=0;
	while(1){
		cin>>name[i];
		if(name[i]=='#')
		break;
		i++;
	}
	
	i=0;
	while(1){
		if(name[i]=='#')
		break;
		cout<<name[i];
		i++;
	}
	return 0;
}


//=========================================================================

//By using string data type . String data type is used to store words and avoid the conditions that we can see in above.  
//it can able to store mixture of datatypes .
//eg: vishnu@2004

#include<iostream>
using namespace std;
int main(){
string name;
cin>>name;
cout<<name;
return 0;
}

