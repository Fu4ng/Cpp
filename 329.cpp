/*
3.29
设计一个点类Point，再设计一个矩形类R（为避免和系统类库重复，名字采用R）。
矩形类设计3个构造函数包括：1）无参数；2）使用4个整数，即左上角和右下角坐标；
3）使用2个点，即Point类的两个坐标点作为矩形的对角顶点。其他成员函数要求：
可以输入、输出矩形的4个坐标值，输出面积，在主函数中测试程序验证程序,要求只能使用指针，
如R *r1 = new R(); r1->.....
不要使用对象，如R r1; r1.set...
*/




/***
疑问： 如何在矩形类中访问点类private的变量
解决 ：Point类中的 getx() gety() 
***/ 
#include<iostream>
using namespace std;
class Point{
	//点类 
private:
	int x,y;
public:
	Point(); //无参数的构造方法，对xy初始化；
	Point(int a,int b);
	void setXY(int a,int b);
	int getX(); //得到X的方法 
	int getY();	//得到Y的方法 
};
class R{
	//矩形
private:
	Point p_r,p_l;
public:
	R();
	/**类point 的无参构造函数已经对每个对象做
	不用对每个p1,p4都初始化了**/
	R(Point p1,Point p2);//用两个点类
	R(int x1,int y1,int x2,int y2);
	int getArea(); 
}; 
Point::Point()//无参数的构造方法，对xy初始化
{
	x=0;
	y=0;
 } 
 Point::Point(int a,int b)
 {
 	x=a;
 	y=b;
 }
 void Point::setXY(int a,int b)
 {
 	x=a;
 	y=b;
 }
 int Point::getX()
 {
 	return x;
 }
  int Point::gety()
 {
 	return y;
 }
 R::R(){
 }
 R::R(Point p1,Point p2 )
 {
 	p_l=p1;
 	p_r=p2;
 }
 R::R(int x1,int y1;int x2,int y2)
 {
 	p_l.setXY(x1,y1);
	p_r.setXY(x2,y2); 	
 	
 }

