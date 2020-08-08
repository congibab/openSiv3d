#pragma once

#include <Siv3D.hpp>
#include "Common.h"

//�O������A�N�Z�X����ꍇ�Aplayer::PlayerModel�̂悤�ɂ���K�v������
//player::�𐭗��������ꍇ�� using namespace player;�̂悤�Ɏw�肷��
//std::string ���@std::�@���g�킸�g�p����ꍇ using namespace std;�@�𓯂�
namespace Player
{
	class PlayerModel
	{
	private:
		Texture playerImage;
		Vec2 position;
		Vec2 ofp; // offSetPosition
		//player vector
		PlayerDirectionType dirType;

	public:
		//player image loard
		void LoadPlayerImage(String imagePath);
		Texture GetPlayerImage();

		//player postion (get, set)
		Vec2 GetPlayerPosition();
		void SetPlayerPosition(Vec2 pos);

		//player off set position (get, set)
		Vec2 GetPlayerOffsetPosition();
		void SetPlayerOffsetPosition(Vec2 offsetPos);

		// Player dir geter, seter
		int GetPlayerDirection();
		void SetPlayerDirection(int direction);
	};
}