#pragma once

#include <Siv3D.hpp>
#include "Common.h"

namespace Player
{
	class PlayerView
	{
	public:
		void Disp(Texture playerImage, Vec2 pos, Vec2 ofp, int direction, int animPattern);
	};
}


