#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init( float in_x, float in_y, float in_vx, float in_vy );
	void Update(const float dt);
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	float x = 0.0f;
	float y = 0.0f;
	float vx = 0.0f;
	float vy = 0.0f;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool initialized = false;
};