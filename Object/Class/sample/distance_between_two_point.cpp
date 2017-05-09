//have proble. 

#include <iostream>
#include <cmath>

class Point
{
	int x;
	int y;
public:
	Point(int ax,int ay){
		int x = ax;
		int y = ay;
	}
	Point(Point& a){
		x = a.x;
		y = a.y;
	}
	~Point(){}
	friend class Line;
};

class Line
{
	Point m_a;
	Point m_b;
public:
	Line(Point a,Point b):m_a(a),m_b(b){
		std::cout<< m_a.x << " "<< m_a.y<<'\n';
		std::cout<< m_b.x << " "<< m_b.y<<'\n';
	}  //complex_class must pass parameter to initlize. 
	~Line(){}
	int GetLength(){
		double x2 = m_a.x-m_b.x;
		double y2 = m_a.y-m_b.y;
		double result = sqrt( x2*x2 + y2*y2 );
		return result;
	}
};

int main(){
	Point pa(1,2);
	Point pb(3,4);
	Line  l(pa,pb);
	std::cout<< l.GetLength()<<'\n';
	return 	0;
}

