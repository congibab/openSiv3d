#pragma once

#include <Siv3D.hpp>
#include "Common.h"

//外部からアクセスする場合、player::PlayerModelのようにする必要がある
//player::を政略したい場合は using namespace player;のように指定する
//std::string を　std::　を使わず使用する場合 using namespace std;　を同じ
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