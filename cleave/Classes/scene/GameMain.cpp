#include "GameMain.h"

cocos2d::Scene * GameMain::createScene()
{
	return GameMain::create();
}

bool GameMain::init()
{
	if (!Scene::init())
	{
		return false;
	}

	TRACE("GameMain\n");
	this->scheduleUpdate();
	return true;
}

void GameMain::menuCloseCallback(cocos2d::Ref * pSender)
{
}

void GameMain::update(float delta)
{
}
