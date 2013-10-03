#include "stdafx.h"
#include <iostream>
using namespace std;

int findWord(char (*arr)[10],char letter)
{
   for(int i=0;i<11;i++)
   {
	   if(arr[i][0]==letter)
	   {
		   return i;
	   }
   }
  
    return 0;
 }

void printWord(char (*arr)[10],int number)
{
	cout<<arr[number]<<" ";
}
