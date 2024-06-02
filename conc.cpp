#include<iostream>

//Standard namespace declaration
using namespace std;

//Main Function
int main()
{
	string input1;
	string input2;
	string combo;
	int i;

	for (i=0; i<3; i++){
		cout << "Input string 1: ";
		cin >> input1;

		cout << "Input string 2: ";
		cin >> input2;

		input1.append(input2);
		cout << input1 << "\n";
	}
}
