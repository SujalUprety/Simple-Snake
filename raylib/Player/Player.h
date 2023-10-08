#include<raylib.h>

class Player {

private:
    Vector2 playerPosition;
    Vector2 playerSize;
    Vector2 playerMovement;
    Rectangle *rectangle;
    float playerSpeed;

private:
    void Move();
    void ClampMovement();

public:
    Player();
    void DrawUpdate();
    void Update();

};