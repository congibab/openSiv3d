#pragma once

#include <Siv3D.hpp> // OpenSiv3D v0.4.2

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

	};
}