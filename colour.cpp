#include "colour.h"
#include <cmath>

Colour::Colour(double in_l) : l(in_l) {}

double convert(RGB c) {
	double r = std::get<0>(c);
	double g = std::get<1>(c);
	double b = std::get<2>(c);
	return sqrt((r * r) + (g * g) + (b * b));
}

Colour::Colour(RGB c) : l(convert(c)) {
}

RGB Colour::toRGB() {
	return std::make_tuple(l, l, l);
}

Colour Colour::operator* (Colour c) {
	return Colour(l * c.l);
}
