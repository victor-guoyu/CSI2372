#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class Player
{
  string name;
  long score;

  public:
  Player(string name="x",long score=0):name(name),score(score) {} long getScore();
  string getName();
  void setScore(long i);
};

class HighScore {
  int nPlayers;     // number of players in HighScore
  static const int size=8;   // (fixed) size of array
  Player players[size];  // Array of player records
  public:
  HighScore();

  void print();

  bool addPlayer(const string& name, long score);

  void removePlayerScores(const string& name);

  void sort();
};
