#include "Food.h"

Food::Food() {
    radius = 5;
    foodPosition = {(float) (rand() % GetRenderWidth()), (float) (rand() % GetRenderHeight())};
}

void Food::DrawUpdate() {
    DrawCircleV(foodPosition, radius, GREEN);
}

void Food::Update() {
    // foodPosition = {(float) (rand() % GetRenderWidth()), (float) (rand() % GetRenderHeight())};
}