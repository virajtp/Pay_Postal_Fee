#include<iostream>
using namespace std;

int select(int val)
{
    if (val==0)
        return 0;
    else if (val % 5 == 0 && val >= 5)
	{
		cout << " 5";
		val -= 5;
		select(val);
	}
	else if (val % 4 == 0 && val >= 4)
	{
		cout << " 4";
		val -= 4;
		select(val);
	}
	else if (val % 4 == 1 && val == 5)
	{
		cout << " 5";
	}
	else if (val % 4 == 2 && val/5<2)
	{
		cout << " 5";
		val -= 5;
		select(val);
	}
	else if (val % 4 == 3 && val/5<3)
	{
		cout << " 5";
		val -= 5;
		select(val);
	}
	else
    {
        cout << " 4";
		val -= 4;
		select(val);
    }
}

int main()
{
    int val;        //declare variable
	cout << "Enter the value : ";
	cin >> val;     //get user input

	//checking the entered value
	while(val<12)
    {
        cout << "Enter a value greater than or equal to 12 !!!\n";
        cin >> val;
    }
	select(val);
}
