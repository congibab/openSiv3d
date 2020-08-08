#include "PlayerModel.h"

namespace Player
{
	//player �摜�ǂݍ���
	//imagePath - add folder�Ɋ
	void PlayerModel::LoadPlayerImage(String imagePath)
	{
	}

	Texture PlayerModel::GetPlayerImage()
	{
		return playerImage;
	}
	

	Vec2 PlayerModel::GetPlayerPosition()
	{
		return position;
	}
	

	void PlayerModel::SetPlayerPosition(Vec2 pos)
	{
		position = pos;
	}

	Vec2 PlayerModel::GetPlayerOffsetPosition()
	{
		return ofp;
	}

	void PlayerModel::SetPlayerOffsetPosition(Vec2 offsetPos)
	{
		ofp = offsetPos;
	}

	//get player direction
	int PlayerModel::GetPlayerDirection()
	{
		return static_cast<int>(dirType);
	}
	
	//set player direcdtion
	void PlayerModel::SetPlayerDirection(int direction)
	{
		dirType = static_cast<PlayerDirectionType>(direction);
	}
}