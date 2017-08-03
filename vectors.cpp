#include "vectors.h"
#include "constants.h"

ThreeVector::ThreeVector(double in_x, double in_y, double in_z) : x(in_x), y(in_y), z(in_z) {}

ThreeVector ThreeVector::operator+(ThreeVector a) {
	return ThreeVector(x + a.x, y + a.y, z + a.z);
}

ThreeVector ThreeVector::operator-(ThreeVector a) {
	return ThreeVector(x - a.x, y - a.y, z - a.z);
}

ThreeVector ThreeVector::operator*(double a) {
	return ThreeVector(a * x, a * y, a * z);
}

ThreeVector ThreeVector::operator/(double a) {
	return ThreeVector(x / a, y / a, z / a);
}

double ThreeVector::dot(ThreeVector a, ThreeVector b) {
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}

ThreeVector ThreeVector::cross(ThreeVector a, ThreeVector b) {
	return ThreeVector(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

FourVector::FourVector(double in_x, double in_y, double in_z, double in_t) : x(in_x), y(in_y), z(in_z), t(in_t) {}

FourVector::FourVector(ThreeVector v, double in_t) : x(v.x), y(v.y), z(v.z), t(in_t) {}

FourVector FourVector::operator+(FourVector a) {
	return FourVector(x + a.x, y + a.y, z + a.z, t + a.t);
}

FourVector FourVector::operator-(FourVector a) {
	return FourVector(x - a.x, y - a.y, z - a.z, t - a.t);
}

FourVector FourVector::operator*(double a) {
	return FourVector(a * x, a * y, a * z, a * t);
}

FourVector FourVector::operator/(double a) {
	return FourVector(x / a, y / a, z / a, t / a);
}

double FourVector::dot(FourVector a, FourVector b) {
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z) - (speed_of_light * a.t * speed_of_light * b.t);
}

ThreeVector FourVector::spatial() {
	return ThreeVector(x, y, z);
}
