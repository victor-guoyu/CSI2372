#include "stdafx.h"
#include "header.h"

 void Employee::print()
{
  cout<<surname<<" "<<first_name<<" "<<salary<<" "<<endl;
}

void Clerk::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<endl;
}
void Engineer::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<endl;
}
void Manager::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<" "<<num_of_team_members<<endl;
}
void Programmer::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<endl;
}
void Accountant::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<endl;
}
void Electrician::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<endl;
}

void Scientist::print()
{
	cout<<surname<<" "<<first_name<<" "<<profession<<" "<<salary<<" "<<personalResponsibility<<" "<<num_of_publications<<endl;
}
