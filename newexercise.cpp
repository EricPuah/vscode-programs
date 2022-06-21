#include <iostream>
using namespace std;

class Box
{
    private: 
		int width, length, height;
	
	public:	
		Box(int w=0, int l=0, int h=0):width(w), length(l), height(h){};
		
		void setWidth(int w){width = w;}
		void setLength(int l){length = l;}
		void setHeight(int h){height = h;}
		
		int getWidth(){return width;}
		int getLength(){return length;}
		int getHeight(){return height;}

       int calcVolume()
       {
           return width*length*height;
       } 

       friend printBox1();
};

void printBox1(Box b)
{
    cout<< "Dimension = " << b.getWidth() <<" x "<< b.getLength() << " x " << b.getHeight() <<endl;
    cout<< "Volume= "<< b.calcVolume()<<endl;
}
int main()
{
    Box boxes[5] = {{10,10,10},{20,20,20}};

    int w,l,h,total;
    for (int i=2; i<5;i++)
    {
        cout<<"Enter box dimensions (w l h) => ";
        cin>> w>>l>>h;
        boxes[i].setWidth(w);
        boxes[i].setLength(l);
        boxes[i].setHeight(h);
    }


    for (int i=0; i<5; i++)
    {   
        printBox1(boxes[i]);
        total += boxes[i].calcVolume();
    }
    cout<<"Total Volume = "<< total <<endl;

    system ("pause");

    return 0;

}

