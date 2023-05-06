#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{   
    private:
	int id;
	char name[100];
	char type[50];
	int staff;
	char room[100];
	int establish_year;
	char address[100];
	char rating[10];
	char website[100];
	
	
	public:
	void H1()
	
	{
		this->id=id;
		this->name[100]=name[100];
		this->type[50]=type[50];
		this->staff=staff;
		this->room[100]=room[100];
		this->establish_year=establish_year;
		this->rating[10]=rating[10];
		this->address[100]=address[100];
		this->website[100]=website[100];
		
		cout<<"Enter your Hotel id:";
		cin>>id;
		cout<<"Enter your Hotel name:";
		cin>>name;
		cout<<"Enter ypur Hotel type:";
		cin>>type;
		cout<<"Enter your Hotel staff:";
		cin>>staff;
		cout<<"Enter your Hotel room:";
		cin>>room;
		cout<<"Enter your Hotel establish_year :";
		cin>>establish_year;
		cout<<"Enter your Hotel address:";
		cin>>address;
		cout<<"Enter your Hotel rating:";
		cin>>rating;
		cout<<"Enter your Hotel website:";
		cin>>website;
		H2();
		
	}
	void H2()
	{  
		cout<<"---------------------------------------------------"<<endl;
		
		cout<<"Hotel ID="<<id<<endl;
		cout<<"Hotel Name="<<name<<endl;
		cout<<"Hotel Type="<<type<<endl;
		cout<<"Hotel Staff="<<staff<<endl;
		cout<<"Hotel Room="<<room<<endl;
		cout<<"Hotel Establish_year="<<establish_year<<endl;
		cout<<"Hotel Address="<<address<<endl;
		cout<<"Hotel Rating="<<rating<<endl;
		cout<<"Hotel Website="<<website<<endl;

	}
	
	
};
main()
{
	Hotel N;
	N.H1();
	
}
