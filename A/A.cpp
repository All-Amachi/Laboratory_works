
#include<iostream>
using namespace std;
int f;
class One
{
public:
	int x;
	int y;
	int s;

	void Menu()
	{
		
		cout << "1.Initialization" << endl;
		cout << "2.Output" << endl;
		cout << "3.Sum" << endl;
		cout << "Select function (1-3):";
		cin >> f;
		system("cls");
	}
	int Sum()
	{
		s = x + y;
		cout << s;
		return 0;
	}
	int Initialization()
	{
		cout << "Input X";
		cin >> x;
		cout << "Input Y";
		cin >> y;
		s = x + y;
		return 0;
	}
	void Out()
	{
		cout << "X = " << x << endl;
		cout << "Y = " << y << endl;
		cout << "S = " << s;

	}
	
};
int main()
{
	One In;
	In.Menu();
	if (f == 1)
	{
		In.Initialization();
		system("cls");
	}
	else if (f == 2)
	{
		In.Out();
	}
	else if(f == 3)
	{
		In.Sum();
	}

}