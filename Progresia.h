#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Geom {
protected:
	float b, q;
public:
	Geom();
	Geom(const Geom& g);
	Geom(float b, float q);
	void print() const;
	float bn(int n);
	float s(int n);
	void multiply(int r);
	void devide(int r);
	void stepin(int r);
	friend istream& operator>>(istream& is, Geom& g);
};

class Spad : public Geom {
public:

	Spad();
	Spad(const Spad& g);
	Spad(float b, float q);
	float full_s();
	bool is_spad() const;
	friend istream& operator>>(istream& is, Spad& g);
};
