#include <raylib.h>

#define XRED (Color){ 88, 20, 20, 255 }

int main(void)
{
    InitWindow(800, 600, "TEST"); SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(XRED);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
