#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int v[10], n, real_frequency = 0;
	cout << "Insert the total number of frequency changes: ";
	cin >> n;
	cout << "Insert all frequency changes: ";
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		real_frequency += v[i];
	}
	cout << "The real frequency after variations is: " << real_frequency;
}
