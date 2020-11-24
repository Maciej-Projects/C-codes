#include<iostream>
#include<cstdlib>
using namespace std;

void bubble_sort(int tab[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n - i; j++) 
			if (tab[j - 1] > tab[j])
				swap(tab[j - 1], tab[j]);
}

int main()
{
	int* tab, n;
	cout << "How many numbers will you want to sort? ";
	cin >> n;

	tab = new int[n];
	for (int i = 0; i < n; i++)
		cin >> tab[i];

	bubble_sort(tab, n);

	for (int i = 0; i < n; i++)
		cout << tab[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
