//#include<iostream>
//#include<string>
//using namespace std;
//class cars {
//	public:
//		int cost;
//		string showroom_location;
//		int persons;
//		int topspeed;
//		
//};
//int main(){
//	cars bmw,benz,audi;
//	bmw.cost=2;
//	bmw.showroom_location="France";
//	bmw.persons=4;
//	bmw.topspeed=324;
//	
//	benz.cost=1;
//	benz.showroom_location="America";
//	benz.persons=4;
//	benz.topspeed=260;
//	
//	audi.cost=2;
//	audi.showroom_location="Australia";
//	audi.persons=4;
//	audi.topspeed=360;
//	
//	cout<<"Enter 1 for bmw details"<<endl;
//	cout<<"Enter 2 for benz details"<<endl;
//	cout<<"Enter 3 for audi details"<<endl;
//	int n;
//	cout<<"Enter your input : ";
//	cin>>n;
//	switch(n){
//	case 1:
//	cout<<bmw.cost<<endl;
//	cout<<bmw.showroom_location<<endl;
//	cout<<bmw.persons<<endl;
//	cout<<bmw.topspeed<<endl;
//	break;
//	
//	case 2:
//	cout<<benz.cost<<endl;
//	cout<<benz.showroom_location<<endl;
//	cout<<benz.persons<<endl;
//	cout<<benz.topspeed<<endl;
//	break;
//	case 3:
//	cout<<audi.cost<<endl;
//	cout<<audi.showroom_location<<endl;
//	cout<<audi.persons<<endl;
//	cout<<audi.topspeed<<endl;
//	break;
//	default:
//		cout<<"Enter correct number for details"<<endl;
//		
//}
//	return 0;
//}





#include<iostream>
#include<string>
using namespace std;
class clint_details{
	private:
		int password;
		int cvv;
		int card_number;
		
	public:
		string clint_name;
		string user_name;
		
		void set_alldetails(int pass,int cvv_details,int card_details){
			password=pass;
			cvv=cvv_details;
			card_number=card_details;
		}
		void get_alldetails(){
			cout<<password<<endl;
			cout<<cvv<<endl;
			cout<<card_number<<endl;
		}
		
};

int main(){
	clint_details a,b;
	getline(cin,a.clint_name);
	getline(cin,a.user_name);
	a.set_alldetails(2004,657,203456);
	a.get_alldetails();
	return 0;
}

