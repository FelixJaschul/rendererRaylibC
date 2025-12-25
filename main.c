#include <raylib.h>
#include <unistd.h>

#define XWIDTH 800
#define XHEIGHT 600
#define XFPS 60

int main()
{
    InitWindow(XWIDTH, XHEIGHT, "TEST"); SetTargetFPS(XFPS);
    Color colors[3] = { 
        (Color){ 88, 20, 20, 255 }, 
        (Color){ 20, 20, 88, 255 }, 
        (Color){ 20, 88, 20, 255 } };
    int current = 0;
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(colors[current]);
        EndDrawing();
        current++; if (current > 2) current = 0;
        usleep(2000*XFPS);
    } CloseWindow();
    return 0;
}

