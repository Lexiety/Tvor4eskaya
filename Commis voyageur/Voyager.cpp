#include <stdio.h>
#include <iostream>
using namespace std;

void del(int** array, int n, int x, int y )

{

	int* p_array = (int*)array;
	int value;
	p_array[x * 50 + y]=0; 

}

void add(int** array, int n, int x, int y, int z)

{

	int* p_array = (int*)array;
	int value;
	p_array[x * 50 + y] = z;

}



int main()
{
	int m[50][50];
	int mas[50][50];
	int n = 5;
	int unn = n;
	m[1][1] = -1;
	m[2][2] = -1;
	m[3][3] = -1;
	m[4][4] = -1;
	m[0][0] = -1;


	m[0][1] = rand() % 100;
	m[0][2] = rand() % 100;
	m[0][3] = rand() % 100;
	m[0][4] = rand() % 100+1;
	m[1][2] = rand() % 100;
	m[1][3] = rand() % 100;
	m[1][4] = rand() % 100;
	m[2][3] = rand() % 100;
	m[2][4] = rand() % 100;
	m[3][4] = rand() % 100;
	m[4][3] = rand() % 100;
	m[1][0] = rand() % 100;
	m[2][0] = rand() % 100;
	m[3][0] = rand() % 100;
	m[4][0] = rand() % 100;
	m[2][1] = rand() % 100;
	m[3][1] = rand() % 100;
	m[4][1] = rand() % 100;
	m[3][2] = rand() % 100;
	m[4][2] = rand() % 100;
	char arr[12] = { 'A', 'B', 'C', 'D', 'E'};
	char arr2[12] = { 'A', 'B', 'C', 'D', 'E' };
	int arr3[12][3];
	cout << endl;

	del((int**)m, n, 1, 3);
	add((int**)m, n, 1, 3, 25);
	int p = 0;
	for (int i = 0; i < 5; i++) { cout << arr[i] << " ";  for (int j = 0; j < 5; j++) { cout << m[i][j] << "  "; } cout << endl; }
	while (n>1)
	{
		int min1 = 99999;
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			min1 = 99999;
			for (int j = 0; j < n; j++)
			{
				if ((m[i][j] != -1)&(m[i][j] < min1))
				{
						min1 = m[i][j];

				}
			}
			for (int j = 0; j < n; j++)
			{
				if (m[i][j] != -1) { m[i][j] = m[i][j] - min1; }
			}
		}

		for (int j = 0; j < n; j++)
		{
			min1 = 99999;
			for (int i = 0; i < n; i++)
			{
				if ((m[i][j] != -1)&(m[i][j] < min1))
				{
						min1 = m[i][j];
				}
			}
			for (int i = 0; i < n; i++)
			{
				if (m[i][j] !=-1) { m[i][j] = m[i][j] - min1; }
			}
		}


		for (int i = 0; i < n; i++) { cout << arr[i] << " ";  for (int j = 0; j < n; j++) { cout << m[i][j] << "  "; } cout << endl; }

		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < n; i++)
			{
				mas[i][j] = 0;
			}

		}

		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < n; i++)
			{
				if ((m[i][j] == 0) & (m[i][j] != -1))
				{
					int min1 = 9999;
					int min2 = 9999;
					for (int z = 0; z < n; z++) { if ((m[i][z] < min1) & (m[i][z] != -1) & (z != j)) { min1 = m[i][z]; } } mas[i][j] = mas[i][j] + min1;
					for (int x = 0; x < n; x++) { if ((m[x][j] < min2) & (m[x][j] != -1) & (x != i)) { min2 = m[x][j]; } } mas[i][j] = mas[i][j] + min2;

				}
			}

		}
		cout << endl;
		
		for (int i = 0; i < n; i++) { cout << arr[i] << " ";  for (int j = 0; j < n; j++) { cout << mas[i][j] << "  "; } cout << endl; }

		int max = -1;
		int z = 0;
		int x = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mas[i][j] > max) { max = mas[i][j]; z = i; x = j; }
			}

		}

		cout << arr[z] << " -> " << arr2[x] << " -> " << max << endl;
		arr3[p][1] = arr[z] - 65;
		arr3[p][2] = arr2[x] - 65;
		arr3[p][3] = max;
		p++;

		for (int i = z; i < n - 1; i++)
			for (int j = 0; j < n; j++)
				m[i][j] = m[i + 1][j];

		for (int i = 0; i < n; i++)
			for (int j = x; j < n - 1; j++)
				m[i][j] = m[i][j + 1];

		for (int j = z; j < n-1 ; j++) 
		{
			arr[j] = arr[j + 1];
		}
		arr[n] = ' ';

		for (int j = x; j < n - 1; j++)
		{
			arr2[j] = arr2[j + 1];
		}
		arr[n] = ' ';
	
		n--;
	}
	cout << endl;



	for (int j=1; j<unn-1; j++)
	for (int i = j+1; i < unn - 1;  i++)
	{
		if (arr3[j - 1][2] == arr3[i][1]) 
		{ 
		swap(arr3[j][1], arr3[i][1]); 
		swap(arr3[j][2], arr3[i][2]);
		swap(arr3[j][3], arr3[i][3]);
		}
	}
	/*for (int i = 0; i < unn - 1; i++)
	{
		cout << arr3[i][1] << " " << arr3[i][2] << " " << arr3[i][3] << endl;
	}*/
	for (int i = 0; i < unn - 1; i++)
	{
		cout <<(char) (arr3[i][1]+65) << "-> ";
	}
	cout << (char)(arr3[unn-2][2]+65);
	cout << endl<<" ";
	int sum = 0;
	for (int i = 0; i < unn - 1; i++)
	{
		cout << arr3[i][3] << "   ";
		sum += arr3[i][3];
	}
	cout << endl;
	cout << "Total distance: " << sum;



	return 0;
}

