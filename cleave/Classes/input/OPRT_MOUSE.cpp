#include "OPRT_MOUSE.h"

OPRT_MOUSE::OPRT_MOUSE(cocos2d::Node& sp)
{
	/*for (int i = 0; i < static_cast<int>(PTN::MAX); i++)
	{
		std::get<0>(_key[i]) = static_cast<PTN>(i);
		std::get<2>(_key[i]) = false;
	}*/
	Init(sp);
}

void OPRT_MOUSE::Init()
{
}

void OPRT_MOUSE::Init(cocos2d::Node& sp)
{
	//マウス用のイベント情報
	auto ctlMouse = cocos2d::EventListenerMouse::create();

	ctlMouse->onMouseUp = [this](cocos2d::Event* event)
	{
		auto e = (cocos2d::EventMouse*)event;
		if (e->getMouseButton() == MOUSE_TYPE::BUTTON_LEFT)
		{
			_flag = true;
		}

		return true;
	};

	//cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(ctlKey, &sp);
	cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(ctlMouse, &sp);
}

void OPRT_MOUSE::Update()
{
	//キー情報の新旧更新処理
	/*for(int i = 0; i < static_cast<int>(PTN::MAX);i++)
	{
		std::get<1>(_key[i]) = std::get<2>(_key[i]);
	}*/

	//_dirの分回してその移動判定がtrueの方向にだけ動かす
	//for (auto dir : _dir)
	//{
	//	if (dir.second == true)
	//	{
	//		//sp->setPosition(sp->getPosition() + dir.first * sp->speed());
	//		auto action = cocos2d::MoveBy::create(1 / 60.0f, dir.first * sp.speed());
	//		sp.runAction(action);
	//	}
	//}
}
