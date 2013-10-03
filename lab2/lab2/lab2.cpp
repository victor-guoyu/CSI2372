// lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int findWord(char (*arr)[10],char letter);
void printWord(char (*arr)[10],int number);
int _tmain(int argc, _TCHAR* argv[])
{
	char arra[11][10]={{'c','+','+'},{'f','a','n','t','a','s','t','i','c'},{ 'g','a','n','g','n','a','m'},{'h','o','w'},{'i','s'},{'l','o','v','e'},{'m','u','c','h'},{'s','t','y','l','e'},{'v','e','r','y'},{'w','e'},{'y','o','u'}};
	char *input;
	cout<<"please enter the length of your string: "<<endl;
	int length;
	cin>> length;
	input=new char[length];
	cout<<"numWords = 11"<<endl;
	cout<<"***OUR WORDBANK CONTAINS the following WORDS: "<<endl;
	cout<<"¡°c++¡±, ¡°fantastic¡±, ¡°gangnam¡±, ¡°how¡±,  ¡°is¡±, ¡°love¡±, ¡°much¡±,  ¡°style¡±,  ¡°very¡±, ¡°we¡±,¡°you¡± "<<endl;
	cout<<"Please enter " <<length<<" letters from the words above,  you can also enter x to finish in the middle"<<endl;
	int i=0;
	while(i<length)
	{
		cin>>input[i];
		if(input[i]!='x')
		{
			i++;
		}else
		  break;
	}
	cout<<"You have enterd "<<i<<" letters and they are: "<<endl;
	for(int index=0;index<i;index++)
	{
			cout<<input[index]<<" ";
	}
	cout<<endl;
	int count=0;
	for(int index=0;index<i;index++)
	{
		int temp=findWord(arra,input[index]);
		if(temp!=0)
		{
			cout<<"FOUND = "<<input[index]<<" is "<<temp<<"th"<<endl;
			count++;
		}
	}
	cout<<"*** The valid letter are "<<count<<" and the corresponding words are: "<<endl;
	for(int index=0;index<i;index++)
	{
     int number=findWord(arra,input[index]);
	 if(number!=0)
	 {
     printWord(arra,number);
	 }
	}
	cout<<endl;
	
	return 0;
}

