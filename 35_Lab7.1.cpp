CODE 7.1


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
	
		void displayDetails(){
		cout<<"Customer ID is ="<<custID<<endl<<"Account Balance ="<<balance<<endl; 
	}
	
	friend void insertDetails(Bank &obj);
	
};
void insertDetails(Bank &obj){
		obj.custID=55;
		obj.balance=150000;
}

int main(){
	Bank obj;
	obj.displayDetails();
	insertDetails(obj);
	obj.displayDetails();
	return 0;
}
