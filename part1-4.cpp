/*4�� ��̬�ڴ����
����point�࣬���ݳ�Ա����x,y����Ա�����������캯����
�������캯���������������Լ�setx��getx��sety��gety�ĸ����Ժ�����
��main�����У���new��delete������ͷ�N��point�����顣��N��const������N=10��*/
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
	Point(Point &p)       //�������캯�� 
	{
		x=p.x;
		y=p.y;
	}
	~Point()         //�������� 
	{
		cout<<"is construction!"<<endl;
	}
	void setx(float xx)    //����setx()�������޸�x��ֵ 
	{
		x=xx;
	}
	void sety(float yy)
	{
		y=yy;
	}
	float getx()         //����getx()��������ȡxֵ 
	{
		return x;
	}
	float gety()
	{
		return y;
	}
	friend iostream & operator >>(iostream &is,Point &p)   //������Ԫ������������ 
	{
		is>>p.x>>p.y;
		return is;
	}
};
int main()
{
	const int N=10;
	Point *p=new Point[N];         //�������ָ�룬Ϊ�䶯̬����洢�ռ� 
	delete []p;             //�ͷ�ָ��p 
	return 0;
}


