#pragma once

class ThreeVector {
public:
	ThreeVector(double x, double y, double z);
	double x, y, z;

	ThreeVector operator+(ThreeVector a);
	ThreeVector operator-(ThreeVector a);
	ThreeVector operator*(double a);
	ThreeVector operator/(double a);

	static double dot(ThreeVector a, ThreeVector b);
	static ThreeVector cross(ThreeVector a, ThreeVector b);
};

class FourVector {
public:
	FourVector(double x, double y, double z, double t);
	FourVector(ThreeVector v, double t);
	double x, y, z, t;

	FourVector operator+(FourVector a);
	FourVector operator-(FourVector a);
	FourVector operator*(double a);
	FourVector operator/(double a);

	static double dot(FourVector a, FourVector b);

	ThreeVector spatial();
};
