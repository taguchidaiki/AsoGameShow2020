#include "StageSelect.h"

cocos2d::Scene * StageSelect::createScene()
{
	return StageSelect::create();
}

bool StageSelect::init()
{
	if (!Scene::init())
	{
		return false;
	}

	this->scheduleUpdate();

	TRACE("StageSelect\n");
	return true;
}

void StageSelect::menuCloseCallback(cocos2d::Ref * pSender)
{
}

void StageSelect::update(float delta)
{
}
