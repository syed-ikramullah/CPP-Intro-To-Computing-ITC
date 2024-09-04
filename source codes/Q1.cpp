
#include <iostream>
using namespace std;
int main() {
	const int Len = 20;
	char a[Len], b[Len], c[Len * 2];
	int index_c = 0;

		cout << "Input word for array a: ";
		cin >> a;
		cout << "Input word for array b: ";
		cin >> b;

		for (int i = 0; i < Len; ++i)
		{
			if (a[i] != '\0' && (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'))
				{
				 c[index_c++] = a[i];
		}
			if (b[i] != '\0' && (b[i] >= 'a' && b[i] <= 'z' || b[i] >= 'A' && b[i] <= 'Z'))
		{
		c[index_c++] = b[i];
		}
		}
		c[index_c] = '\0'; 
			cout << "Values stored in array c: " << c << endl;
 
 
	system("pause");
	return 0;
}
