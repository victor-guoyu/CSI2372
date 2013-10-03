
#include "stdafx.h"
#include "listWords.h"

int _tmain(int argc, _TCHAR* argv[])
{
	listWords myList;
	myList.printWordArray();
	myList.getUserLetters();
	myList.printUserInput();
	myList.findWords();
	myList.printUsersWords();
	return 0;
}

