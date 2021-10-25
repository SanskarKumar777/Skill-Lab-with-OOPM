CODE 1
  
#include<iostream>
 using namespace std;
 
 class student{
 	public:
 		
 		int roll_number;
 		
 		string name;
 		
 		string branch;
 		
 		student(){
 			
 		cout<<"Enter roll number"<<endl;
 		cin>>roll_number;
 		
 		cout<<"Enter name"<<endl;
 		cin>>name;
 		
 		cout<<"Enter branch"<<endl;
 		cin>>branch;
 		
	}
 };
 
 class exam: public student{
 	public:
 		
 	int maths;
 	
 	int physics;
 	
 	int chemistry;
 	
 	exam(){
 		
 	cout<<"Enter Physics Marks"<<endl;
 	cin>>physics;
 	
 	cout<<"Enter chemistry Marks"<<endl;
 	cin>>chemistry;
 	
 	cout<<"Enter Maths Marks"<<endl;
 	cin>>maths;	
 	
    }
 };
 
 class sport{
 	public:
 		
 	int sports;
 	
 	sport(){
 	cout<<"Enter sports Marks"<<endl;
 	cin>>sports;
	 	
    }
 };
 
 class result : public exam, public sport {
 	public:
 		
 		int total;
 		
 		result(){
 			
 		total = maths + physics + chemistry + sports;
 		
 		cout<<total<<endl;
 		
 	    }
 };
 
 int main()
 {
 	result obj;
 	return 0;   
 }

CODE 2
 
  #include <iostream>
#include <stdio.h>
using namespace std;
 

class basicInfo
{
    protected:  
        char    name[30];
        int     empId;
        char    gender;
    public:
        void getBasicInfo(void)
        {
            cout << "Enter Name: "; 
            cin.getline(name,30);
            cout << "Enter Emp. Id: ";
            cin  >> empId;
            cout << "Enter Gender: ";
            cin  >> gender;
        }
};
 

class deptInfo
{
    protected:  
        char    deptName[30];
        char    assignedWork[30];
        int     time2complete;
    public:
        void getDeptInfo(void)
        {
            cout << "Enter Department Name: "; 
            cin.ignore(1);
            cin.getline(deptName,30);
            cout << "Enter assigned work: ";
            fflush(stdin);
            cin.getline(assignedWork,30);
            cout << "Enter time in hours to complete work: ";
            cin  >> time2complete;
        }
};
 
class employee:private basicInfo, private deptInfo
{
    public:
        void getEmployeeInfo(void){
            cout << "Enter employee's basic info: " << endl;
            
            getBasicInfo();     
            cout << "Enter employee's department info: " << endl;
            
            getDeptInfo();      
        }
        void printEmployeeInfo(void)
        {
            cout << "Employee's Information is: "     << endl;
            cout << "Basic Information...:"       << endl;
            cout << "Name: "      << name   << endl;      
            cout << "Employee ID: " << empId  << endl;       
            cout << "Gender: "        << gender << endl << endl;
             
            cout << "Department Information...:"  << endl;
            cout << "Department Name: "           << deptName   << endl; 
            cout << "Assigned Work: "             << assignedWork << endl; 
            cout << "Time to complete work: "     << time2complete<< endl;
        }
};
 
int main()
{
   
    employee emp;
     
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
     
    return 0;
}
