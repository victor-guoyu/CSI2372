
// lab4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Header.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
   int type;
    HighScore board;
    string name;
	long score;
    cout<<"add player and score plz enter 1"<<endl;
    cout<<"remove player plz enter 2"<<endl;
    cout<<"exit the program plz enter 3 "<<endl;
	  while(true)
  {
    cout<<"please enter which type of function you wish to perform:"<<endl;
    cin>>type;
    switch(type)
    {
    case 1:
        cout<<"Plz enter the name of the player"<<endl;
       cin>>name;
        cout<<"Plz enter the score of the player"<<endl;
        cin>>score;
        board.addPlayer(name,score);
		board.sort();
        cout<<"----------------------------------"<<endl;
        board.print();
        break;
    case 2:
        cout<<"Please enter the player's name that your want to delet: "<<endl;
        cin>>name;
        board.removePlayerScores(name);
        cout<<"----------------------------------"<<endl;
        board.print();
        break;
    case 3:
        cout<<"terminating the program"<<endl;
        return 0;
    }

  }
  return 0;
}
