/*
3.29
���һ������Point�������һ��������R��Ϊ�����ϵͳ����ظ������ֲ���R����
���������3�����캯��������1���޲�����2��ʹ��4�������������ϽǺ����½����ꣻ
3��ʹ��2���㣬��Point��������������Ϊ���εĶԽǶ��㡣������Ա����Ҫ��
�������롢������ε�4������ֵ�������������������в��Գ�����֤����,Ҫ��ֻ��ʹ��ָ�룬
��R *r1 = new R(); r1->.....
��Ҫʹ�ö�����R r1; r1.set...
*/




/***
���ʣ� ����ھ������з��ʵ���private�ı���
��� ��Point���е� getx() gety() 
***/ 
#include<iostream>
using namespace std;
class Point{
	//���� 
private:
	int x,y;
public:
	Point(); //�޲����Ĺ��췽������xy��ʼ����
	Point(int a,int b);
	void setXY(int a,int b);
	int getX(); //�õ�X�ķ��� 
	int getY();	//�õ�Y�ķ��� 
};
class R{
	//����
private:
	Point p_r,p_l;
public:
	R();
	/**��point ���޲ι��캯���Ѿ���ÿ��������
	���ö�ÿ��p1,p4����ʼ����**/
	R(Point p1,Point p2);//����������
	R(int x1,int y1,int x2,int y2);
	int getArea(); 
}; 
Point::Point()//�޲����Ĺ��췽������xy��ʼ��
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

