#include "GameEnd.h"

cocos2d::Scene * GameEnd::createScene()
{
	return GameEnd::create();
}

bool GameEnd::init()
{
	if (!Scene::init())
	{
		return false;
	}
	this->scheduleUpdate();
	TRACE("GameEnd\n");
	return true;
}

void GameEnd::menuCloseCallback(cocos2d::Ref * pSender)
{
}

void GameEnd::update(float delta)
{
}
