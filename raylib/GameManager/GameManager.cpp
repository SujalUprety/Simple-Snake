#include "GameManager.h"

GameManager::GameManager() {

    player = new Player();
    food = new Food();

    while(!WindowShouldClose()) {
        DrawUpdate();
        Update();
    }
}

GameManager::~GameManager() {
    delete player;
    delete food;
}

void GameManager::DrawUpdate() {

    ClearBackground(BLACK);
    BeginDrawing();

    DrawText(std::to_string(GetFPS()).data(), 760, 10, 20,LIGHTGRAY);

    player->DrawUpdate();
    food->DrawUpdate();

    EndDrawing();
}

void GameManager::Update() {
    player->Update();
    food->Update();
}