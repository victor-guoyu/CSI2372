#include <iostream>

class listWords{
   char **dataWords;
   char input [100];
   int  *validinputs;
   int count;
   int numberOfValid;
public:
	listWords();
	~listWords();

	void printWordArray();
	void printUserInput();
	void getUserLetters();
	void findWords();
	int findWord(char startingLetter);
	void printUsersWords();
	void printword(int _thWord);
};