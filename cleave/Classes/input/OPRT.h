﻿#pragma once
#include "cocos2d.h"
#include <map>
#include <array>

#define KEY_TYPE cocos2d::EventKeyboard::KeyCode

enum class PTN
{
	RIGHT_CLICK,
	MAX
};

enum class OPRT_TYPE
{
	KEY,
	TOUCH,
	MAX
};

struct OPRT
{
	OPRT(){};
	virtual ~OPRT() {};

	virtual void Init(cocos2d::Node& sp) = 0;
	virtual OPRT_TYPE GetOprtType(void) = 0;
	virtual void Update() = 0;

	//get関数
	std::array<std::tuple<PTN,bool,bool>, static_cast<int>(PTN::MAX)> key(void) { return _key; };
	
protected:
	//キーの入力情報　_dir[キーの情報] first old情報 second now情報
	std::array<std::tuple<PTN, bool, bool>, static_cast<int>(PTN::MAX)> _key;
	
};

