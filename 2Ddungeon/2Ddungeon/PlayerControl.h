#pragma once

#include <Siv3D.hpp>
#include "Common.h"

#define ANIM_WALK_SPEED_SLOW 8
#define ANIM_WALK_SPEED_FAST 4


#define PLAYER_WALK_SPEED_SLOW 4
#define PLAYER_WALK_SPEED_FAST 8

namespace Player
{
	class PlayerControl
	{
	private:
		static int animTable[4];


	private:
		//is walking
		bool isWalk;
		//anim table
		// animPatter�̈ʒu
		int animPatternPos;
		// anim timer counter 
		int timerCounter;
		// anim chage timer
		int timerMax;
		// move speed
		int walkSpeed;

	public:
		PlayerControl();
		virtual ~PlayerControl();
		void ControlUpdate();
		void ViewUpdate();
	};
}


