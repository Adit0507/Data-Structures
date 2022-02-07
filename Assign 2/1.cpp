#include "bits\stdc++.h"
using namespace std;

int main()
{
	int x,n;
	int steps=0;
	cin >> x;

	if(x <= 5)
	cout << "1";
	else
	{
		if(x%5==0)
		{
			n = x/5;
			cout << n <<endl;
		}
		else
		{
			n = x/5 +1;
			cout << n <<endl;
		}
	}

	return 0;
}

