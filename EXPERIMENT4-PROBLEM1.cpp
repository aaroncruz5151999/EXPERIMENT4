#include <iostream>

using namespace std;

int add(int x, int y)
{
	int answer;
	answer=x+y;
	return answer;
}

int subtract(int x, int y)
{
	int answer;
	answer=x-y;
	return answer;
}

int multiply(int x, int y)
{
	int answer;
	answer=x*y;
	return answer;
}

int divide(int x, int y)
{
	int answer;
	answer=x/y;
	return answer;
}

int rem(int x, int y)
{
	int answer;
	answer=x%y;
	return answer;
}

int main()

{
	int x, y, choice, answer;
	char z;
	
	do {
		cout << "MENU: \n\t 1. Add \n\t 2. Subtract \n\t 3. Multiply \n\t 4. Divide \n\t 5. Modulus" << endl;
		cout << "Please enter your choice: "; cin >> choice;
		
		switch (choice)
		
		{
			
			case 1: 
				cout << "Please enter your two numbers: "; cin >> x >> y;
				answer = add(x,y); 
				cout << "Result: " << answer << endl;
				break;
			
			case 2: 
				cout << "Please enter your two numbers: "; cin >> x >> y;
				answer = subtract(x,y); 
				cout << "Result: " << answer << endl;
				break;
				
			case 3: 
				cout << "Please enter your two numbers: "; cin >> x >> y;
				answer = multiply(x,y); 
				cout << "Result: " << answer << endl;
				break;
			
			case 4: 
				cout << "Please enter your two numbers: "; cin >> x >> y;
				answer = divide(x,y); 
				cout << "Result: " << answer << endl;
				break;
				
			case 5: 
				cout << "Please enter your two numbers: "; cin >> x >> y;
				answer = rem(x,y); 
				cout << "Result: " << answer << endl;
				break;
		}
		
	cout << "Would you like to continue? ";
	cin >> z;
	} while (z == 'y' || z == 'Y');
	
	return 0;
}
