#pragma once
#include "cocos2d.h"
#include "debug/_DebugGraph.h"
#include "debug/_DebugConOut.h"
#include "input/OPRT_MOUSE.h"
#include "scene/StageSelect.h"

class GameTitle
	:public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);

	void update(float delta);

	// implement the "static create()" method manually
	CREATE_FUNC(GameTitle);

private:
	std::unique_ptr<OPRT> input;
};

