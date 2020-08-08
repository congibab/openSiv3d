#include "PlayerControl.h"

namespace Player
{
	int PlayerControl::animTable[] = { 1,0,1,2 };

	//const Inti
	PlayerControl::PlayerControl()
	{
		//is walking
		isWalk = false;
		//anim table
		//animTable = {1,0,1,2};
		// animPatter�̈ʒu
		animPatternPos = 0;
		// anim timer counter 
		timerCounter = 0;
		// anim chage timer
		timerMax = ANIM_WALK_SPEED_SLOW;
		// move speed
		walkSpeed = PLAYER_WALK_SPEED_SLOW;
	}

	PlayerControl::~PlayerControl()
	{
	}

	void PlayerControl::ControlUpdate()
	{
	}

	void PlayerControl::ViewUpdate()
	{
	}

}
