#pragma once

#include <Siv3D.hpp> // OpenSiv3D v0.4.2

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

	};
}