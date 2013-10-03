// lab5.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "header.h"

void report(Employee &staff)
{
	staff.print();
	return;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Clerk A("Johnson", "Alan","Clerk",25100, "telephone");
    report(A);
	Engineer B("Lockers","Daniel","Engineer",53500,"car");
	report(B);
	Manager C("Adamson", "John","Manager",77500,"meeting",12);
	report(C);
	Programmer D("Newhall","Bob","Programmer",40000, "c++");
	report(D);
	Clerk E("Brown", "James","Clerk",28000,"visitors");
	report(E);
	Accountant F("Cheng", "Linda","Accountant",35500, "bonus");
	report(F);
	Programmer G("Lipmann","Charles","Programmer",45500,"data structure");
	report(G);
	Electrician H("Watt","James","Electrician",30000,"switch");
	report(H);
	Manager I("Jones","Mary","Manager",70500,"hiring",7);
	report(I);
	Programmer J("Lockers","Dennis","Programmer",41000,"hacker hunting");
	report(J);
	Clerk K("Green","Sylvester","Clerk",30000,"documents");
	report(K);
	Scientist L("Lubbers", "Pieter","Scientist",60000,"Big Bang",40);
	report(L);
	return 0;
}
/*




*/