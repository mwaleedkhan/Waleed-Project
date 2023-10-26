#include<iostream>
#include<string>
using namespace std;

int main() 
{
	string students; 
	char choice;
	cout << "Waleed Program" << endl;
	do 
	{
		string currentStudent;
		cout << "Enter Student Name:  ";
		getline(cin, currentStudent);
		cin.ignore();
		students.append(currentStudent);
		students.append("\n");

		cout << "Want to Continue Entering Press Y or y: ";
		cin >> choice; 
		cin.ignore();

	} while (choice == 'Y' || choice == 'y');

	cout << students; 
	system("pause");
	return 0;
}