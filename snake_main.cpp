#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;
bool gameover;
const ll width = 20;
const ll height = 20;
ll x, y, score, fruitx, fruity;
enum edirection
{
    stop = 0; left, right, up, down
};
edirection dir;
void setup()
{
    gameover = false;
    x = width / 2;
    y = height / 2;
    fruitx = rand() / width;
    fruity = rand() / height;
    score = 0;
    dir = stop;
}
void draw()
{
}
void input()
{
}
void logic()
{
}
int main()
{
    setup();
    draw();
    input();
    logic();
    return 0;
}