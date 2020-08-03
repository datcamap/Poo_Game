#include "Vec2.h"

Vec2::Vec2(float x_init, float y_init)
	:
	x(x_init),
	y(y_init)
{
}

Vec2 Vec2::operator+(const Vec2& rhs) const
{
	return Vec2(x + rhs.x, y + rhs.y);
}

Vec2& Vec2::operator+=(const Vec2& rhs)
{
	return *this = *this + rhs;
}

Vec2 Vec2::operator*(const float scaler)
{
	return Vec2(x * scaler, y * scaler);
}

Vec2& Vec2::operator*=(const float scaler)
{
	return *this = *this * scaler;
}

