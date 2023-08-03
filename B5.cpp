//SHAPES VALA

include<iostream>
#include<cmath>
using namespace std;

class Shape{
	protected:
		const double PI=3.14;
	
	public:
		
		virtual float area()=0;
		virtual void display_area()=0;
};

class TwoDim: public Shape{
	public:
		virtual float area()=0;
		virtual void display_area()=0;
		virtual int peri()=0;	
		virtual void display_peri()=0;			
};

class ThreeDim: public Shape{
	public:
		virtual float area()=0;
		virtual void display_area()=0;
		virtual float vol()=0;	
		virtual void display_vol()=0;			
};

class Triangle: public TwoDim{
	int side1;
	int side2;
	int side3;
	public:
	Triangle(int s1,int s2,int s3){
			
		side1=s1;
		side2=s2;
		side3=s3;
	}
	float area(){
			int s=(side1+side2+side3)/2;
			
			float area= sqrt(s*(s-side1)*(s-side2)*(s-side3));
			return area;
		}
	void display_area(){
		float ar= area();
		cout<<"\n\nArea of Triangle: "<<ar;
	} 
	
	int peri(){
		int per=side1+side2+side3;
		return per;
	}
	void display_peri(){
		int per=peri();
		cout<<"\nPerimeter of Triangle: "<<per;
	}
};

class Rectangle:public TwoDim{

	int len;
	int br;
	public:
		Rectangle(int l,int b){
			len=l;
			br=b;
			
		}
		float area(){			
			float area= len*br;
			return area;
		}
		void display_area(){
			float ar= area();
			cout<<"\n\nArea of Rectangle: "<<ar;
		} 
		
		int peri(){
			int per=2*(len+br);
			return per;
		}
		void display_peri(){
			int per=peri();
			cout<<"\nPerimeter of Rectangle: "<<per;
		}
	
};

class Circle: public TwoDim{
	int rad;
	public:
		Circle(int r){
			rad=r;
		}
		float area(){			
			float area= PI*rad*rad;
			return area;
		}
		void display_area(){
			float ar= area();
			cout<<"\n\nArea of Circle: "<<ar;
		} 
		
		int peri(){
			int per=2*PI*rad;
			return per;
		}
		void display_peri(){
			int per=peri();
			cout<<"\nPerimeter of Circle: "<<per;
		}
		
};

class Cone: public ThreeDim{
	int rad;
	int height;
	int len;
	
	public:
		Cone(int r,int h,int l){
			rad=r;
			height=h;
			len=l;
		}
		float area(){			
			float area= PI*rad*len+PI*rad*rad;
			return area;
		}
		void display_area(){
			float ar= area();
			cout<<"\n\nSurface Area of Cone: "<<ar;
			return;
		} 
		
		float vol(){
			float volume=PI*rad*rad*(height/3);
			return volume;
		}
		void display_vol(){
			float volume=vol();
			cout<<"\nVolume of Cone: "<<volume;
			return;
		}
		
};

class Cube: public ThreeDim{
	int side;
	public:
		Cube(int s){
			side=s;
		}
		float area(){			
			float area=6*side*side ;
			return area;
		}
		void display_area(){
			float ar= area();
			cout<<"\n\nSurface Area of Cone: "<<ar;
			return;
		} 
		
		float vol(){
			float volume=side*side*side;
			return volume;
		}
		void display_vol(){
			float volume=vol();
			cout<<"\nVolume of Cone: "<<volume;
			return;
		}
};

class Sphere:public ThreeDim{
	int rad;
	public:
		Sphere(int r){
			rad=r;
		}
		float area(){			
			float area= PI*4*rad*rad;
			return area;
		}
		void display_area(){
			float ar= area();
			cout<<"\n\nSurface Area of Cone: "<<ar;
			return;
		} 
		
		float vol(){
			float volume=PI*rad*rad*(4/3);
			return volume;
		}
		void display_vol(){
			float volume=vol();
			cout<<"\nVolume of Cone: "<<volume;
			return;
		}
};


int main(){
	TwoDim *p1,*p2,*p3;
	Rectangle Rect(3,4);
	p1=&Rect;
	Triangle Tri(2,2,3);
	p2=&Tri;
	Circle Cir(5);
	p3=&Cir;
	ThreeDim *p4,*p5,*p6;
	Cone cone(2,3,4);
	p4=&cone;
	Cube cube(4);
	p5=&cube;
	Sphere sph(5);
	p6=&sph;
	
	p1->display_area();
	p1->display_peri();
	p2->display_area();
	p2->display_peri();
	p3->display_area();
	p3->display_peri();
	
	cout<<"\n\n\n";
	
	p4->display_area();
	p4->display_vol();
	p5->display_area();
	p5->display_vol();
	p6->display_area();
	p6->display_vol();
	
	return 0;
}




