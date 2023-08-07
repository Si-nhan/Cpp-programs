                                                //The students list:
#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	string ID;
	double average_score;
} temp, st[5];

void arrangment(struct student *a)
{
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = 4; j > i; j--)
			if (a[j].average_score > a[i].average_score) {
				temp = *(a+i);
			    *(a+i) = *(a+j);
				*(a+j) = temp;
			}
}

main()
{
	cout << "Enter students information: ";

	for (int i = 0; i < 5; i++)
		cin >> st[i].name >> st[i].ID >> st[i].average_score;

	arrangment(st);

	cout << "The students list after the arrangement:" << endl;
	for (int i = 0; i < 5; i++)
	    cout << st[i].name << " "<< st[i].ID << " "<< st[i].average_score << endl;
}