#include "stdafx.h"
#include "Header.h"

using namespace std;
string Player:: getName()
{
  return name;
}

long Player::getScore()
{
  return score;
}

void Player:: setScore(long i)
{
  score=i;
}

HighScore::HighScore() : nPlayers (0) {}
void HighScore::print() {
  for (int i=0; i< nPlayers; i++)
    cout << "#" << i << ": " << players[i].getScore()
      << " " << players[i].getName() << endl;
}

bool HighScore::addPlayer(const string& name, long score)
{
  Player p(name, score);

  if (nPlayers == size) {
    if (p.getScore() <
        players[nPlayers].getScore())
      return false;
    else {
      players[nPlayers-1]= p;
      return true;
    }
  }

  if (nPlayers==0) {
    players[0]= p;
    nPlayers++;
    return false;
  }
  if((nPlayers!=0) && (nPlayers!=size))
  {
    players[nPlayers]=p;
    nPlayers++;
    return true;
  }
  return true;
}

void HighScore::removePlayerScores(const string& name)
{
  for(int index=0;index<nPlayers;index++)
  {
    if(players[index].getName() ==name)
    {
      players[index].setScore(0);
      nPlayers--;
    }
  }
  sort();
}
void HighScore:: sort()
{
  int i, j, flag = 1;
  Player temp;
  int numLength = 8;
  for(i = 1; (i <= numLength) && flag; i++)
  {
    flag = 0;
    for (j=0; j < (numLength -1); j++)
    {
      if (players[j+1].getScore() >players[j].getScore())
      {
        temp = players[j];
        players[j] = players[j+1];
        players[j+1] = temp;
        flag = 1;
      }
    }
  }
}
