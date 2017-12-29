#ifndef __MAP_SCENE_H__
#define __MAP_SCENE_H__

#include "cocos2d.h"

class MapScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene(const std::string& mapResourceName);

	bool init(const std::string& mapResourceName);
};

#endif //!__MAP_SCENE_H__
