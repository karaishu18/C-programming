/*Write a C++ program to read time in HH:MM:SS format and convert into total seconds using class.*/

#include<iostream>
using namespace std;

class time
{
	private :
		int hours,mins,secs;
	public :
		entertime();
		displaytime();
	    int converttoseconds();	
};

time :: entertime()
{
	cout<<"Enter time:\nHours?";
	cin>>hours;
	cout<<"\nMinutes?";
	cin>>mins;
	cout<<"\nSeconds?";
	cin>>secs;
}

time :: displaytime()
{
	cout<<"\nThe time is="<<hours<<":"<<mins<<":"<<secs;
}

time :: converttoseconds()
{
	cout<<"\nTime in total seconds: "<<((hours*60*60)+(mins*60)+secs);
}

main()
{
	time t;
	t.entertime();
	t.displaytime();
	t.converttoseconds();
}
