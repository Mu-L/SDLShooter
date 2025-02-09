#ifndef SCENE_MAIN_H
#define SCENE_MAIN_H

#include "Scene.h"
#include "Object.h"


class Game;

class SceneMain : public Scene {
public:
    SceneMain();
    ~SceneMain();

    void update() override;
    void render() override;
    void handleEvent(SDL_Event* event) override;
    void init() override;
    void clean() override;

    void keyboardControl();

private:
    Game &game;
    Player player;
    
};


#endif // SCENE_MAIN_H