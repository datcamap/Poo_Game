#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Keyboard& kbd, const float dt );
	int GetX() const;
	int GetY() const;
	int GetWidth() const;
	int GetHeight() const;
private:
	float x = 400.0f;
	float y = 300.0f;
	static constexpr int speed = 300; //pixels per seconds
	static constexpr int width = 20;
	static constexpr int height = 20;
};