#include "stdafx.h"
#include <iostream>
#include "listWords.h"
using namespace std;
listWords::listWords()
{
	static char temp[11][10]={"c++","fantastic","gangnam","how","is","love","much","style","very","we","you"};
	dataWords = new char *[10];
	count=0;
	for(int index=0;index<11;index++)
	{
		dataWords[index]=temp[index];
	}
}

listWords::~listWords()
{
	
}
void listWords::getUserLetters()
{
	cout<<"-----------------------"<<endl;
	cout<<"Please enter your letter. Press 'x' to finish"<<endl;
		while(count<50)
	{
		cin>>input[count];
		if(input[count]!='x')
		{
			count++;
		}else
		  break;
	}
}
void listWords::printWordArray()
{
	cout<<"-----------------"<<endl;
	cout<<"--orintWordArray()"<<endl;
	for(int index=0;index<11;index++)
	{
		cout<<dataWords[index]<<" ";
	}
	cout<<endl;
	cout<<"-----------------"<<endl;
}
void listWords::printUserInput()
{
	cout<<"-----------------"<<endl;
	cout<<"--printUserInput(): You have entered "<<count<<" letter and they are: "<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<input[i]<<" ";
	} 
	cout<<endl;
	cout<<"-----------------"<<endl;
}
int listWords:: findWord(char word)
{
	 
	for(int i=0;i<11;i++)
	{
		if(dataWords[i][0]==word)
		{
			cout<<"FOUND "<<word<<" at "<<i<<"th"<<endl;
			return i;
		}
	}
	return -1;
}
void listWords:: findWords()
{
	cout<<"------------------"<<endl;
	cout<<"--findWords()--"<<endl;
	validinputs=new int[count];
	int temp;
	numberOfValid=0;
	for(int i=0;i<11;i++)
	{
		temp=findWord(input[i]);
		if(temp!=-1)
		{
			validinputs[numberOfValid]=temp;
			numberOfValid++;
		}
	}

}
void listWords::printUsersWords()
{
	for(int i=0;i<numberOfValid;i++)
	{
		printword(validinputs[i]);
	}
	cout<<endl;
	cout<<"-------------------------"<<endl;
}
void listWords::printword(int num)
{
	cout<<dataWords[num]<<" ";
}