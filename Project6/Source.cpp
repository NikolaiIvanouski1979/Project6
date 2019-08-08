# include <iostream>
using namespace std;

struct Distance
{
	int feet;
	float inches;
};

void scale(Distance&, float);
void endldisp(Distance);

int main()
{
	Distance d1 = { 12, 6.5 };
	Distance d2 = { 10, 5.5 };
	cout << "d1 = "; endldisp(d1);
	cout << "d2 = "; endldisp(d2);
	scale(d1, 0.5);
	scale(d2, 0.25);
	cout << "d1 = "; endldisp(d1);
	cout << "d2 = "; endldisp(d2);
	cout << endl;
	system("pause");
	return 0;
}

void scale(Distance& dd, float factor)
{
	float inches = (dd.feet * 12 + dd.inches) * factor;
	dd.feet = static_cast<int>(inches / 12);
	dd.inches = inches - dd.feet * 12;
	}

void endldisp(Distance dd)
{
	cout << dd.feet << "'-" << dd.inches << endl;
}