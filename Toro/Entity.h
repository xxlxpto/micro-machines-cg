#pragma once
#include "Vector3.h"
	
class Entity
{
private:
	Vector3* _position;
public:
	Entity();
	Vector3* getPosition();
	Vector3* setPosition(double x, double y, double z);
	Vector3* setPosition(const Vector3 & p);
	virtual ~Entity();
};

