#include <iostream>
using namespace std;

int arr[20] //array to be searched
int n; //Number of element in the array
int i; // index of array element 

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the arrat: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 an maximum 20 element. \n\n";
	}

	//Accept array element
	cout << "\n--------------------\n";
	cout << " Enter array element \n";
	cout << " --------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
} 

void LinearSerach()
{
	char ch;
	int ctr; // Number of comparisons
	int item;

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search: "; // step 1
		cin >> item;

		ctr = 0;
		i = 0; // step 2
		while (i < n) // step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " found at position " << (i + 1) << endl; // step 6
				break;
			}
			i++; // step 4
		}

		if (i == n) // step 5
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}

void displaly()
{
	cout << "Array elements are: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}