#include "GameTitle.h"

cocos2d::Scene * GameTitle::createScene()
{
	return GameTitle::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

bool GameTitle::init()
{
	if (!Scene::init())
	{
		return false;
	}

	auto visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
	cocos2d::Vec2 origin = cocos2d::Director::getInstance()->getVisibleOrigin();

	auto sprite = cocos2d::Sprite::create("background/title.png");
	if (sprite == nullptr)
	{
		problemLoading("'background/title.png'");
	}
	else
	{
		// position the sprite on the center of the screen
		sprite->setPosition(cocos2d::Vec2(visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

		// add the sprite as a child to this layer
		this->addChild(sprite, 0);
	}

	input = std::make_unique<OPRT_MOUSE>((*this));

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
	if (input->flag())
	{
		auto scene = StageSelect::createScene();
		director->replaceScene(scene);
	}
	input->Update();
}
