#include <iostream>
#include <string>
using namespace std;

/*
cin >> ... Input is read from the unput stream 
			from the first character to the first white space (space/return)

If you want to capture string input that contains whitespace,
then use the getline funcition

syntax:
	getline (inputSource, stringVariable);

example:
	getline (cin, sName);

Try not to mix cin >> and the getlines in the same program.


*/

int main()
{
	string sName;
	cout << "Enter your full name: ";
	
	//cin >> sName; WONT WORK BECAUSE OF SPACES!
	
	getline(cin, sName);

	cout << sName << endl;

	return 0;
}