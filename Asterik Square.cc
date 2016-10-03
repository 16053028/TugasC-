#include <iostream>  // necessary for cout command
using namespace std;
	int w = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	
	int main()
	{
	while(1)
	{
	cout << "Enter the width: ";
	cin >> w;
	
	if ( w <= 78 && w >= 1 )
	   { break; }
	else
	    {cout << endl;
	    cout << "Please use numbers between 1 and 78";
	    cout << endl;}
	cout << endl;
	}
	cout << endl;
	while (1)
	{
	cout << "Enter the height: ";
	cin >> h;
	if ( h <= 23 && h >= 1 )
	   { break; }
	else
	    {cout << endl;
	    cout << "Please use numbers between 1 and 23";
	    cout << endl;}
	cout << endl;
	}
	cout << endl << endl;
	cout << "Your rectangle looks like this ";
	cout << endl;
	for( i = 1; i <= h; i++ )
	    {
	    for ( j = 1; j <= w; j++ )
	    {cout << " * ";}
	    cout << endl;
	    }
	system ("pause");
	return 0;
	}