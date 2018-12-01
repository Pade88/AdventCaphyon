#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	int* v = new int[1050];
	int real_frequency = 0;
	int size = 0;
	ifstream f("inputs.txt");
	int i = 0;
	while (!f.eof())
	{
		f >> *(v+i);
		cout << "Curent frequency is: " << real_frequency << " variation is " << *(v + i);
		real_frequency += *(v + i);
		cout << " resulting frequency is: " << real_frequency << endl;
		i++;
		size++;
	}


	cout << "The real frequency after variations is: " << real_frequency;
	delete[] v;
}
