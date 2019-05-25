#include <iostream>

using namespace std;

void sort(int array[], int size);

int main ()
{
	
	int size, x, y;
	
	cout << "Please enter the array size: "; cin >> size;
	
	int array[size];
	cout << "Please enter the " << size << " elements: ";
	
	for (x=0; x<size; x++)
		cin >> array[x];	
	
	cout << endl << "Your data: \n";
		
	for (x=0; x<size; x++)
		cout << array[x] << endl;
	
	cout << endl;
	
	sort(array, size);
	
	return 0;
}

	void sort(int array[], int size)
{
	for (int x=0; x<size-1; x++)
	{
		for (int y=x+1; y<size; y++)
		{
			if (array[x]>array[y])
			{
				int z = array[x];
				array[x] = array[y];
				array[y] = z;
			}
		}
	}
	
	cout<< "After using selection or bubble sort..." << endl;
	cout << "Sorted data: \n";
	
	for (int x=0; x<size; x++)
		cout << array[x] << " " << endl;
}
