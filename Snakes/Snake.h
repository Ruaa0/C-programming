//贪吃蛇
#ifndef __SNAKES__
#define __SNAKES__
#include <queue>
#include <vector>
using namespace std;
struct pos
{
    int x;
    int y;
};
class Map                                   // 地图 + 食物
{
    public:
        void food();
        void prt(int, int);            // 打印分数等
        int Width, Height, food_x, food_y;
        char map[22][22];
        Map();
};
class Snake:public Map                      // 蛇蛇
{   
    private:
        queue<pos> snake;       // 蛇蛇身子组成一个队列，vector里放坐标
        int score, speed, dir;
        char direction;
    public:
        void move();
        Snake();
};   
#endif
