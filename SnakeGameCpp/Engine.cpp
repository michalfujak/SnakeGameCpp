/*
*
* Snake Game C++
* Programmer - Michal Fujak
*
*/

#include <iostream>
#include <conio.h>

using namespace std;

/*
* Variables
*/
bool gameOver;
const int width = 20;
const int height = 20;
int x;
int y;
int fruitX;
int fruitY;
int score;
enum eDirector { STOP = 0, LEFT, RIGHT, TOP, BOTTOM };
eDirector dir;

// Static functions
/*
* SETUP function
*/
void Setup()
{
	gameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

/*
* DRAW function
*/
void Draw()
{
	system("cls"); // system("clear")
	for (int i = 0; i < width; i++)
	{
		cout << "#";
	}
	cout << endl;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
			{
				cout << "#";
			}
			if (i == y && j == x)
			{
				cout << "O";
			}
			else if (i == fruitY && j == fruitX )
			{
				cout << "F";
			}
			else
			{
				cout << " ";
			}
			if (j == width - 1)
			{
				cout << "#";
			}
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < width; i++)
	{
		cout << "#";
	}
	cout << endl;
}

/*
* INPUT function
*/
void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;

		case 'w':
			dir = TOP;
			break;

		case 'd':
			dir = RIGHT;
			break;

		case 's':
			dir = BOTTOM;
			break;

		case 'x':
			gameOver = true;
			break;

		default:
			break;
		}
	}
}

/*
* LOGIC function
*/
void Logic()
{
	switch (dir)
	{
	case STOP:
		break;

	case LEFT:
		x--;
		break;

	case RIGHT:
		x++;
		break;

	case TOP:
		y--;
		break;

	case BOTTOM:
		y++;
		break;

	default: // 5>>55
		break;

	}
}

/*
* main theard start
*/
int main()
{
	Setup();
	while(!gameOver)
	{
		// Call if methods
		Draw();
		Input();
		Logic();

	}
	return 0;
}