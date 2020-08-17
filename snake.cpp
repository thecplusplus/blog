#include<iostream>
//#include<random>
using namespace std;
bool gameOver;
const int width = 20;
const int height =20;
int x,y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void setup()
{
	gameOver = false;
	dir = STOP;
	x = width/2;
	y = height/2;
	//fruitX = rand() % width;
	//fruitY = rand() % height;
	score = 0;
}
void draw()
{
	system("cls");
	for(int i =0; i<width; i++)
	{
		for(int j = 0; j< height; j++)
		{
			if( i == 0 || j==0 || i == width-1 || j == height-1)
			{
				cout<< "#";
			}
			else
			cout<< " ";
		}
		cout<<endl;
	}
		
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
	/*while(!gameOver)
	{
		draw();
		input();
		logic();	
		//sleep(10);
	}*/	
	return 0;
}
