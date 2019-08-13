/*
*
* Snake Game C++
* Programmer - Michal Fujak
*
*/

#include <iostream>

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

}

/*
* LOGIC function
*/
void Logic()
{

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