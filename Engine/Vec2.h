#pragma once

class Vec2
{
public:
	Vec2() = default;
	Vec2(float x_init, float y_init);
	Vec2 operator+(const Vec2& rhs) const ;
	Vec2& operator+=(const Vec2& rhs);
	Vec2 operator*(const float scaler);
	Vec2& operator*=(const float scaler);
public:
	float x;
	float y;
};