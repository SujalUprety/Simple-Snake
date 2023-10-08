#include<raylib.h>
#include<stdlib.h>

class Food {

private:
    float radius;
    Vector2 foodPosition;

public:
    Food();
    void DrawUpdate();
    void Update();

};