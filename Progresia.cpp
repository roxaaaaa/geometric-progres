#include "Progresia.h"

Geom::Geom() : b(1.0), q(1.0) {}

Geom::Geom(const Geom& g) : b(g.b), q(g.q) {}

Geom::Geom(float b, float q): b(b), q(q) {}

void Geom::print() const
{
	cout << "b=" << b << " q=" << q << endl;
}

float Geom::bn(int n)
{

	return b + pow(q,(n - 1));
}

float Geom::s(int n)
{
	return b * ((1 - pow( q , n)) / (1 - q));
}

void Geom::multiply(int r)
{
	b *= r;
}

void Geom::devide(int r)
{
	b /= r;
}

void Geom::stepin(int r)
{
	b = pow(b, r);
	q = pow(q, r);
}

istream& operator>>(istream& is, Geom& g)
{
	is >> g.b >> g.q;
	return is;
}

istream& operator>>(istream& is, Spad& g)
{
	is >> g.b >> g.q;
	return is;
}

Spad::Spad() : Geom(1, 1) {}

Spad::Spad(const Spad& g) : Geom(g.b, g.q) {}

Spad::Spad(float b, float q) : Geom(b,q){}

float Spad::full_s()
{
	if (is_spad() == 1) {
		return b / (1 - q);
	}
	else cout << "isn`t spadna" << endl;
}

bool Spad::is_spad() const
{
	if (q < 1) return true;
	else return false;
}
