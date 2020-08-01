#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	auto old_time = last;
	last = steady_clock::now();
	duration<float> frame_time = last - old_time;
	return frame_time.count();
}
