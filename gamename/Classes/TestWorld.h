#ifndef __TestWorld_Scene_H__
#define __TestWorld_Scene_H__

#include"cocos2d.h"

class TestWorld : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool Init();

	void menuCloseCallback(cocos2d::Ref* pSender);

	CREATE_FUNC(TestWorld);
};

#endif // __HELLOWORLD_SCENE_H__