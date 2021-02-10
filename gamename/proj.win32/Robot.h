#pragma once

#ifndef  __ROBOT_H__
#define __ROBOT_H__


#include"cocos2d.h"
#include"cocos2dx\CCDragonBonesHeaders.h"

class Robot
{
public:
	static const std::string NORMAL_ANIMATION_GROUP;
	static const std::string AIM_ANIMATION_GROUP;
	static const std::string ATTACK_ANIMATION_GROUP;
	static const float JUMP_SPEED;
	static const float NORMALIZE_MOVE_SPEED;
	static const float MAX_MOVE_SPEED_FRONT;
	static const float MAX_MOVE_SPEED_BACK;
private:
	bool _isJumpingA;
	bool _isJumpingB;
	bool _isSquating;
	bool _isAttackingA;
	bool _isAttackingB;
	int _faceDir;
	int _aimDir;
	int _moveDir;
	float _aimRadian;
	float _speedX;
	float _speedY;
	dragonBones::CCArmatureDisplay* _armatureDisplay;
	dragonBones::Armature* _weaponR;
	dragonBones::Armature* _weaponL;
	dragonBones::AnimationState* _aimState;
	dragonBones::AnimationState* _walkState;
	dragonBones::AnimationState* _attackState;
	cocos2d::Vec2 _target;
};

#endif //  __ROBOT_H__