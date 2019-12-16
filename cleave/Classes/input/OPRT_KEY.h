#pragma once
#include "OPRT.h"

#define MOUSE_TYPE cocos2d::EventMouse::MouseButton

struct OPRT_KEY :public OPRT
{
	
	OPRT_KEY(cocos2d::Node& sp);
	~OPRT_KEY() {};

	//初期化関数
	void Init(cocos2d::Node& sp) override;

	//入力タイプを返す
	OPRT_TYPE GetOprtType(void) override { return OPRT_TYPE::KEY; };

	//アップデート関数
	void Update() override;

private:
	//cocos2dxのキー情報から必要なものだけ回収したテーブル
	MOUSE_TYPE _keyTbl[static_cast<int>(PTN::MAX)] = {
		MOUSE_TYPE::BUTTON_RIGHT
	};

};

