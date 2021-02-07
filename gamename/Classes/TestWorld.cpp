#include "TestWorld.h"

USING_NS_CC;

cocos2d::Scene* TestWorld::createScene()
{
	return TestWorld::create();
}

bool TestWorld::Init()
{

	if (!Scene::init())
	{
		return false;
	}

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	return false;
}

void TestWorld::menuCloseCallback(cocos2d::Ref* pSender)
{
	Director::getInstance()->end();
}
