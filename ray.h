#pragma once

#include "vectors.h"

class Ray {
public:
	FourVector position, direction;
	Colour colour;
	bool done; //has the ray hit a light-source/escaped to infinity
};
