﻿#ifndef __Tiny_H__
#define __Tiny_H__

#include "actors/Actor.h"

namespace Tiny
{
	class Tiny : public Actor
	{
	public:
		static Tiny* create();
	CC_CONSTRUCTOR_ACCESS:
		Tiny();
		virtual ~Tiny();

		bool init() override;

		bool isLeftPressed() const;
		bool isRightPressed() const;
	private:
		bool _isLeftPressed;
		bool _isRightPressed;
		void onKeyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
		void onKeyReleased(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
	};
}


#endif //!__Tiny_H__