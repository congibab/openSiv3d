#include "PlayerView.h"

namespace Player
{
	
	void PlayerView::Disp(Texture playerImage, Vec2 pos, Vec2 ofp, int direction, int animPattern)
	{
		playerImage(animPattern * 32, direction * 32, 32, 32).draw(pos + ofp);
	}
}

