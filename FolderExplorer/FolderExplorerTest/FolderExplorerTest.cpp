// FolderExplorerTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FolderExplorer.h"

#include <iostream> 
using namespace std;

int main()
{
	if (5 != FolderExplorer::Functions::Add(2, 3) || 10 == FolderExplorer::Functions::Add(2, 4)) {
		cout << "Error in Add" << endl;
	}
    return 0;
}

