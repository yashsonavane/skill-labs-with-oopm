#include<iostream>
using namespace std;

class Bank{
	int custID;
	float balance;
	
	public:
	Bank(){
		custID=0;
		balance=0;
	}
	/*void insertDetails(){
		custID=25;
		balance=15000;
	}*/
	
	void displayDetails(){
		cout<<"Customer ID is ="<<custID<<endl<<"Account Balance ="<<balance<<endl; 
	}
	
	friend void insertDetails(Bank &obj);
	
};
void insertDetails(Bank &obj){
		obj.custID=25;
		obj.balance=15000;
}

int main(){
	Bank obj;
	obj.displayDetails();
	insertDetails(obj);
	obj.displayDetails();
	return 0;
}
