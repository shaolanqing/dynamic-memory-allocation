/*4、 动态内存分配
定义point类，数据成员包括x,y，成员函数包括构造函数，
拷贝构造函数和析构函数，以及setx，getx，sety，gety四个属性函数。
在main函数中，用new和delete分配和释放N个point的数组。（N是const常量，N=10）*/
#include<iostream>
using namespace std;
class Point
{
private:
	float x,y;
public:
	Point()
	{
		x=0;
		y=0;
	}
	Point(float xx,float yy)
	{
		x=xx;
		y=yy;
	}
	Point(Point &p)       //拷贝构造函数 
	{
		x=p.x;
		y=p.y;
	}
	~Point()         //析构函数 
	{
		cout<<"is construction!"<<endl;
	}
	void setx(float xx)    //定义setx()函数来修改x的值 
	{
		x=xx;
	}
	void sety(float yy)
	{
		y=yy;
	}
	float getx()         //定义getx()函数来获取x值 
	{
		return x;
	}
	float gety()
	{
		return y;
	}
	friend iostream & operator >>(iostream &is,Point &p)   //定义友元函数，输入流 
	{
		is>>p.x>>p.y;
		return is;
	}
};
int main()
{
	const int N=10;
	Point *p=new Point[N];         //定义对象指针，为其动态分配存储空间 
	delete []p;             //释放指针p 
	return 0;
}


