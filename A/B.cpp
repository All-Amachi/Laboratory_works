
#include<iostream>
using namespace std;
class One
{
public:
	int R;
	int h;
	int p;
	void Vvod()
	{
		cout << "R=";
		cin >> R;
		cout << "h=";
		cin >> h;
		cout << "p=";
		cin >> p;
	}
	int main()
	{
		Vvod();
	}
};