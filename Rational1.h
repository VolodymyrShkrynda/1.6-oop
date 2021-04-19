#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Rational1
{
public:
	class Pair
	{
		double first, second;
	public:
		void SetFirst(double value);
		void SetSecond(double value);

		double GetFirst() const;
		double GetSecond() const;

		void Init(double x, double y);
		void Read();
		void Display();

		string toString_pair() const;

	};


	void SetP(double first, double second);
	Pair GetP() const;

	void Display();
	void Read();
	string toString() const;

	int ComparePairs(Pair p1, Pair p2) const;
	void ComparePairsResult(int result);

private:
	Rational1::Pair p;
};

