
#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	int i, x=0, n=0;bool f = true;
	while (1)
	{
		cin >> x >> n;
		if (getchar() == '\n')
			break;
		if (n != 0)
		{
			x = x*n;
			n = n - 1;
			if (f == true)
				f = false;
			else
				cout << " ";
			cout << x<<" "<<n;
		}
	}
	if (n != 0)
	{
		x = x*n;
		n = n - 1;
		cout <<" "<< x << " " << n;
	}
	else if(f==true&&n==0)
	{
		cout <<'0'<< " " << '0';
	}
	cout << endl;
	system("pause");
	return 0;
}
