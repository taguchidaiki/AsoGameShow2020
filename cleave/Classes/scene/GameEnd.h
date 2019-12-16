#pragma once
#include "cocos2d.h"
#include "debug/_DebugGraph.h"
#include "debug/_DebugConOut.h"

class GameEnd
	:public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);

	void update(float delta);

	// implement the "static create()" method manually
	CREATE_FUNC(GameEnd);
};

