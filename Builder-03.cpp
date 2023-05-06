#include<iostream>
#include<string.h>

using namespace std;

class clg;
class HighSchool
{
	public :
		int id;
		char name[100];
		int roll_no;
		int standard;
		int age;
		char contact[12];
		char address[100];
		static char school_name[100];
		
		 void setData()
		{
		    cout<<"HighSchool Name:-"<<HighSchool::school_name<<endl;
			cout<<"Enter student ID:-";
			cin>>id;
			cout<<"Enter student Name";
			cin>>name;
			cout<<"Enter student Roll no=";
			cin>>roll_no;
			cout<<"Enter student standard=";
			cin>>standard;
			cout<<"Enter student Age=";
			cin>>age;
			cout<<"Enter student Contact=";
			cin>>contact;
			cout<<"Enter student Address=";
			cin>>address;
			cout<<"................................................................"<<endl;

		}
		
		 void getData()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Student Name="<<name<<endl;
			cout<<"Student Roll No="<<roll_no<<endl;
			cout<<"Student Standard="<<standard<<endl;
			cout<<"Student Age="<<age<<endl;
			cout<<"Student Contact="<<contact<<endl;
			cout<<"Student Address="<<address<<endl;
			cout<<"................................................................"<<endl;


		}
		
};


class clg
{
	public :
		int id;
		char name[100];
		int roll_no;
		int standard;
		int age;
		char contact[12];
		char address[100];
		static char College_name[100];
		
		 void setData_clg()
		 
		{
           	cout<<"College Name:-"<<clg::College_name<<endl;
			cout<<"Enter student ID:-";
			cin>>id;
			cout<<"Enter student Name";
			cin>>name;
			cout<<"Enter student Roll no=";
			cin>>roll_no;
			cout<<"Enter student standard=";
			cin>>standard;
			cout<<"Enter student Age=";
			cin>>age;
			cout<<"Enter student Contact=";
			cin>>contact;
			cout<<"Enter student Address=";
			cin>>address;
	    	cout<<"................................................................"<<endl;

		}
		 
		 void getData_clg()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Student Name="<<name<<endl;
			cout<<"Student Roll No="<<roll_no<<endl;
			cout<<"Student Standard="<<standard<<endl;
			cout<<"Student Age="<<age<<endl;
			cout<<"Student Contact="<<contact<<endl;
			cout<<"Student Address="<<address<<endl;

		}
		
};
char HighSchool::school_name[]="J B Diamond School";
char clg::College_name[]="Government Medical College";


main()
{
	
	HighSchool h;
	clg c;
	
	
	h.setData();
	h.getData();
	
	c.setData_clg();
	c.getData_clg();
	
};
