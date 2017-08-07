#pragma once
#include <tuple>

typedef std::tuple<double, double, double> RGB;

class Colour {
public:
	Colour(double l); //directly instantiate with values
	Colour(RGB c); //convert RGB values into internal format
	RGB toRGB();
	Colour operator*(Colour c);
	const double l; //initially only an intensity as B & W, not colour
};
