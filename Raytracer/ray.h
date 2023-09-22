#pragma once
#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray
{
public:
	ray() {}
	ray(const point3 origin, const vec3 direction,float t = 0.0) : orig(origin), dir(direction),_time(t) {}

	point3 origin() const { return orig; }
	vec3 direction() const { return dir; }

	point3 at(double t) const { return orig + t * dir; }
	float time() const { return _time; }
public:
	point3 orig;
	vec3 dir;
	float _time;
};

#endif
