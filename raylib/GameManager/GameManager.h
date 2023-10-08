#include<raylib.h>
#include<sstream>
#include "../Player/Player.cpp"
#include "../Food/Food.cpp"

class GameManager {

private:
    Player* player;
    Food* food;

private:
    void DrawUpdate();
    void Update();

public:
    GameManager();
    ~GameManager();

};