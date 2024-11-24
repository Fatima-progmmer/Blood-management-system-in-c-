#include<iostream>
#include "Data_base.h"
#include<cstring>
using namespace std;
int main()
{
	Database db;
	while(1)
		{
			int n;
			cout << "\n\t\t===============================" << endl;
			cout << "\n\t\t|  Blood Bank Management  |"<< endl;
			cout << "\n\t\t===============================" << endl;
			cout <<"\n\t\t ::Enter Your Choice::"<< endl;
			cout << "\n\t\t1)To Add New Data \n\t\t2)To View List of Donar \n\t\t3)To View List of Need\n\t\t4)Exit" << endl;
			cout << "\n\t\tChoice:";
			cin >> n;
			switch(n)
			{
				case 1:
					system("cls");
					db.addRecord();
					break;
				case 2:
					system("cls");
					db.viewRecords();
					break;
				case 3:
					system("cls");
					db.searchRecord();
					break;
				case 4:
					exit(0);
				case 5:
					cout << "\n\nBrought To you By code-projects.org";
					return 0;
					break;
				default:
					system("cls");
					cout <<"\n\nPlease Enter Your choice Correctly:\a\a" << endl;
					break;
				}
		}
	return 0;
}

