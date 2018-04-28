// ryan Slipher
//1/29/2018

#include <iostream>
#include <cmath>
using namespace std;

class Point
{
	private:
	int _x;
	int _y;
public:
	Point()
	{
		_x = 0;
		_y = 0;
	}

	Point(int inX, int inY)
	{
	
		_x = inX;
		_y = inY;
	}
	int getX()
	{
		return _x;
	}
	int getY()
	{
		return _y;
	}
	float distanceTo(Point otherPoint)
	{
		float dX = otherPoint.getX() - _x;
		float dY =otherPoint.getY() - _y;
		return sqrt(pow(dX, 2) + pow(dY, 2));
	}

	void setX(int inX)
	{
		if (inX < 0)
		{
			_x = 0;
		}
		else
		{
			_x = inX;
		}
	}
	void setY(int inY)
	{
		_y = inY;
	}
	void reset(int inX, int inY)
	{
		setX(inX);
		setY(inY);
	}
};
int main(int argc, const char* argv[])
{
	//int x1 = 1;
	//int y1 = 1;
	Point p1 = Point(1, 1);
	//int x2 = 4;
	//int y2 = 2
	Point p2 = Point(4, 2);
	//int x3 = 5;
	//int y3 = 5;

	//float d = sqrt(pow(p2.getX() - p1.getX(),2) + pow(p2.getY() - p1.getY(), 2));
	float d = p1.distanceTo(p2);
	cout << "distance " << d << endl;
	//cout << "hello World!\n";
	//p1.setX(10);
	p1.reset(7, 9);
	d = p1.distanceTo(p2);
	cout << "distance " << d << endl;



	//int i = 0;
	int nums[5] = { 5,3,2,4,1 };
	/*do {
		cout << nums[i] << endl;
		i = i + 1;
	} while (i < 5);*/
	/*while (i < 5)
	{
		cout << nums[i] << endl;
		i = i + 1;
	}*/

	//for Loop
	for (int i = 0; i < 5; i = i + 1)		//i++;= i += 1;= i= i + 1;
	{
		cout << nums[i] << endl;

	}
	
	cin.get();
	return 0;
}