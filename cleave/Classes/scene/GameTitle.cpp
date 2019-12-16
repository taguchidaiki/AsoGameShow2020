#include "GameTitle.h"

cocos2d::Scene * GameTitle::createScene()
{
	return GameTitle::create();
}

bool GameTitle::init()
{
	if (!Scene::init())
	{
		return false;
	}

	this->scheduleUpdate();

	TRACE("GameTitle\n");
	return true;
}

void GameTitle::menuCloseCallback(cocos2d::Ref * pSender)
{
}

void GameTitle::update(float delta)
{
	auto director = cocos2d::Director::getInstance();

}
