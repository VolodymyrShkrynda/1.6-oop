#include "Rational1.h"

void Rational1::SetP(double first, double second)
{
	p.Init(first, second);
}
Rational1::Pair Rational1::GetP() const { return p; }

void Rational1::Display()
{
	cout << endl;
	cout << "First (x) = " << p.GetFirst() << endl;
	cout << "Second (y) = " << p.GetSecond() << endl;
}
void Rational1::Read()
{
	double x, y;
	cout << "First (x) = "; cin >> x; p.SetFirst(x);
	cout << "Second (y) = "; cin >> y; p.SetSecond(y);
}
string Rational1::toString() const
{
	stringstream sout;

	cout << endl;
	sout << "First (x) = " << p.GetFirst() << endl;
	sout << "Second (y) = " << p.GetSecond() << endl;

	return sout.str();
}

int Rational1::ComparePairs(Rational1::Pair p1, Rational1::Pair p2) const
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 2;
	if (p1.GetFirst() == p2.GetFirst() &&
		p1.GetSecond() == p2.GetSecond())
		return 3;
	else
		return 0;
}
void Rational1::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << endl;
		cout << "P1 > P2" << endl;
		break;
	case 2:
		cout << endl;
		cout << "P1 < P2" << endl;
		break;
	case 3:	
		cout << endl;
		cout << "P1 = P2" << endl;
		break;
	}
}

//Pair
void Rational1::Pair::SetFirst(double value) { first = value; }
void Rational1::Pair::SetSecond(double value) { second = value; }

double Rational1::Pair::GetFirst() const { return first; }
double Rational1::Pair::GetSecond() const { return second; }

void Rational1::Pair::Init(double x, double y)
{
	first = x;
	second = y;
}
void Rational1::Pair::Read()
{
	cout << "First (x) = "; cin >> first;
	cout << "Second (y) = "; cin >> second;
}
void Rational1::Pair::Display()
{
	cout << endl;
	cout << "First (x)= " << GetFirst() << endl;
	cout << "Second (y)= " << GetSecond() << endl;
}

string Rational1::Pair::toString_pair() const
{
	stringstream sout;

	cout << endl;
	sout << "First (x) = " << first << endl;
	sout << "Second (y)= " << second << endl;

	return sout.str();
}