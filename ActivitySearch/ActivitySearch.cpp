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
} 