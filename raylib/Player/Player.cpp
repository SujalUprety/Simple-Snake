#include "Player.h"

Player::Player() {
    rectangle = new Rectangle;

    *rectangle = {playerPosition.x, playerPosition.y,playerSize.x, playerSize.y};

    playerSpeed = 2;
    playerPosition = {400, 300};
    playerSize = {15, 15};
    playerMovement = {playerSpeed, 0};
}

void Player::DrawUpdate() {
    DrawRectangleRec(*rectangle, MAROON);
}

void Player::Update() {
    Move();
    ClampMovement();
}

void Player::Move() {
    if(IsKeyPressed(KEY_W) && playerMovement.x != 0) playerMovement = {0, -playerSpeed};
    if(IsKeyPressed(KEY_S) && playerMovement.x != 0) playerMovement = {0, playerSpeed};
    if(IsKeyPressed(KEY_A) && playerMovement.y != 0) playerMovement = {-playerSpeed, 0};
    if(IsKeyPressed(KEY_D) && playerMovement.y != 0) playerMovement = {playerSpeed, 0};

    playerPosition.x += playerMovement.x;
    playerPosition.y += playerMovement.y;

    rectangle[0] = {playerPosition.x, playerPosition.y,playerSize.x, playerSize.y};
}

void Player::ClampMovement() {
    playerPosition.x = (int) playerPosition.x % GetRenderWidth();
    playerPosition.y = (int) playerPosition.y % GetRenderHeight();

    if(playerPosition.x < 0) playerPosition.x += GetRenderWidth();
    if(playerPosition.y < 0) playerPosition.y += GetRenderHeight();
}