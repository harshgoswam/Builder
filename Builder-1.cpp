#include<iostream>
#include<string.h>
using namespace std;

 class employee
 {
	private:
		int id;
		char name[100];
		char role[100];
		char salary[20];
		int exp;
		char address[100];
		char email[100];
		char contact[11];
		
		public:
		
		void setData()
		{
			cout<<"Enter your id:";
			cin>>id;
			cout<<"Enter your name:";
			cin>>name;
			cout<<"Enter your role:";
			cin>>role;
			cout<<"Enter your salary:";
			cin>>salary;
			cout<<"Enter ypur Experience;";
			cin>>exp;
			cout<<"Enter your address:";
			cin>>address;
			cout<<"Enter your email:";
			cin>>email;
			cout<<"Emter your contact;";
			cin>>contact;

		}
		void getData()
		{
			cout<<"ID="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Role="<<role<<endl;
			cout<<"Salary="<<salary<<endl;
			cout<<"Experience="<<exp<<endl;
			cout<<"Address="<<address<<endl;
			cout<<"Email="<<email<<endl;
			cout<<"Contact="<<contact<<endl;
		}
	
};
main()
{
	employee e1,e2,e3,e4,e5;
	
	e1.setData();
	     cout<<endl;
	e2.setData();
		cout<<endl;

	e3.setData();
		cout<<endl;

	e4.setData();
		cout<<endl;

	e5.setData();
		cout<<endl;

	
	cout<<"---------------------------------------------------"<<endl;
	e1.getData();
		cout<<endl;

	e2.getData();
		cout<<endl;

	e3.getData();
		cout<<endl;

	e4.getData();
		cout<<endl;

	e5.getData();
		cout<<endl;

	
	
	
	
}
