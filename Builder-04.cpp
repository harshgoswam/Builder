#include<iostream>
#include<string.h>

using namespace std;

class State
{
	public :
	static char state_name[100];
	char district_name[100];
	int no_of_Area;
	char Capital_name[100];
	char largest_city[100];
	char state_population[100];
	char state_language[100];
	
	void setData()
	{ 		
	
	    cout<<"State="<<state_name<<endl;
	   	cout<<"Enter District Name =";
		cin>>district_name;
		cout<<"Enter No of Area =";
		cin>>no_of_Area;
		cout<<"Enter  Capital Name=";
		cin>>Capital_name;
		cout<<"Enter Largest City =";
		cin>>largest_city;
		cout<<"Enter No of State Population =";
		cin>>state_population;
		cout<<"Enter State Language =";
		cin>>state_language;
		cout<<"..........................................."<<endl;
	}
	
	void getData()
	{
		cout<<"District="<<district_name<<endl
		<<"no_of_Area="<<no_of_Area<<endl
    	<<"Capital_name="<<Capital_name<<endl
		<<"Largest City="<<largest_city<<endl
		<<"State Population="<<state_population<<endl
		<<" Language="<<state_language<<endl;		
	}
	
	
	
};

char State::state_name[100]="Gujarat";

main()
{
	State s;
	
	s.setData();
	s.getData();
	
}
