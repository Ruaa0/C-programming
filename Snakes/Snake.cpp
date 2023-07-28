#include "Snake.h"
#include<time.h>
#include<windows.h>
#include<iostream>
#include<conio.h>
Map::Map()
{
    Width = Height = 22;
    for(int i = 1; i < Height - 1; i++){
        for(int j = 1; j < Width - 1; j++)
            map[i][j] = ' ';
    }
    for(int i = 0; i < Width; i++)
        map[0][i] = map[Height - 1][i] = '#';
    for(int i = 1; i <= Height - 2; i++)
        map[i][0] = map[i][Width - 1] = '#';
    food();
}
void Map::food()
{
    srand(time(0));
    do{
        food_x = rand()%(Width - 2) + 1;
        food_y = rand()%(Height - 2) + 1;
    }while(map[food_x][food_y] != ' ');
    map[food_x][food_y] = '$';
}
void Map::prt(int score, int speed)
{
    system("cls");
    for(int i = 0; i < Height; i++)
    {
        for(int j = 0; j < Width; j++)
            cout << map[i][j] << ' ';
        if(i == 2) cout << "\tScore:" << score;
        if(i == 4) cout << "\tspeed:" << speed;
        if(i == 6) cout << "\tpress P to quit.";

        cout<<endl;
    }
}
Snake::Snake()
{
    score = 1, dir = 0;
    int snake_x, snake_y;
    srand(time(0));
    do{
        snake_x = rand()%(Width - 2) + 1;
        snake_y = rand()%(Height - 2) + 1;
    }while(map[snake_x][snake_y] != ' ');
    pos s{snake_x, snake_y};
    snake.push(s);
    map[snake_x][snake_y] = '@';
}
void Snake::move()
{
    score = 1, speed = 10;
    direction = 77;
    prt(score, speed);
    while(1)
    {
        pos sb = snake.back();
        int s_x = sb.x;
        int s_y = sb.y;
        Sleep(speed);
        if(_kbhit())
        {
            direction = getch();
            if(direction == 'W' || direction == 'w')
                dir = 1;
            else if(direction == 's' || direction == 'S')
                dir = 2;
            else if(direction == 'd' || direction == 'D')
                dir = 3;
            else if(direction == 'a' || direction == 'A')
                dir = 4;
            else if(direction == 'p' || direction == 'P')
                dir = 5;
        }
        if(dir == 1)
        {
            dir = 1;
            if(s_x - 1 == food_x && s_y == food_y){
                map[sb.x][sb.y] = '*';
                pos s{food_x, food_y};
                snake.push(s);
                score++;
                map[food_x][food_y] = '@';
                food();
            }
            else if(map[s_x - 1][s_y] != ' ')
                break;
            else{
                pos s;
                s.x = s_x - 1;
                s.y = s_y;
                if(snake.size() > 1)
                    map[s_x][s_y] = '*';
                map[snake.front().x][snake.front().y] = ' ';
                snake.pop();
                snake.push(s);
                map[s.x][s.y] = '@';
            }
        }
        else if(dir == 2)
        {
            dir = 2;
            if(s_x + 1 == food_x && s_y == food_y){
                map[sb.x][sb.y] = '*';
                pos s{food_x, food_y};
                snake.push(s);
                score++;
                map[food_x][food_y] = '@';
                food();
            }
            else if(map[s_x + 1][s_y] != ' ')
                break;            
            else{
                pos s;
                s.x = s_x + 1;
                s.y = s_y;
                if(snake.size() > 1)
                    map[s_x][s_y] = '*';
                map[snake.front().x][snake.front().y] = ' ';
                snake.pop();
                snake.push(s);
                map[s.x][s.y] = '@';
            }          
        }
        else if(dir ==3)
        {
            dir = 3;
            if(s_x == food_x && s_y + 1 == food_y){
                map[sb.x][sb.y] = '*';
                pos s{food_x, food_y};
                snake.push(s);
                score++;
                map[food_x][food_y] = '@';
                food();
            }
            else if(map[s_x][s_y + 1] != ' ')
                break;            
            else{
                pos s;
                s.x = s_x;
                s.y = s_y + 1;
                if(snake.size() > 1)
                    map[s_x][s_y] = '*';
                map[snake.front().x][snake.front().y] = ' ';
                snake.pop();
                snake.push(s);
                map[s.x][s.y] = '@';
            }        
        }
        else if(dir == 4)
        {
            dir = 4;
            if(s_x == food_x && s_y - 1 == food_y){
                map[sb.x][sb.y] = '*';
                pos s{food_x, food_y};
                snake.push(s);
                score++;
                map[food_x][food_y] = '@';
                food();
            }
            else if(map[s_x][s_y - 1] != ' ')
                break;
            else{
                pos s;
                s.x = s_x;
                s.y = s_y - 1;
                if(snake.size() > 1)
                    map[s_x][s_y] = '*';
                map[snake.front().x][snake.front().y] = ' ';
                snake.pop();
                snake.push(s);
                map[s.x][s.y] = '@';
            }        
        }
        else if(dir == 5)
            break;
        //map[snake.back().x][snake.back().y] = '@';
        prt(score, speed);
    }
    system("cls");
    cout << "Game Over" << endl;
}