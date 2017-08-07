#pragma once

#include "ray.h"

class Renderable {
public:
	virtual double intersects(Ray r); //get the proper time when the ray intersects with the object, if applicable
	virtual Ray interact(Ray r); //calculate the ray produced from the object
};
