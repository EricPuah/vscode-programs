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
		
		int calcVolume(){return width * length * height;}
	
};

void printBox(Box b) 
{
	cout << "\nDimension = "
	<< b.getWidth() << " x "
	<< b.getLength() << " x "
	<< b.getHeight() << endl;
	
	cout << "Volume\t  = " << b.calcVolume() << endl;

}

int main()
{
	int w, l, h, totalVol;
	
	Box b[5] = {{10,10,10}, 
				{20,20,20}};
	
	for(int i=2; i<5; i++){
		cout << "Enter box dimensions (w l h) => ";
		cin >> w >> l >> h;
		b[i].setWidth(w);
		b[i].setLength(l);
		b[i].setHeight(h);
	}
	
	for(int i=0; i<5; i++){
		printBox(b[i]);
		
		totalVol += b[i].calcVolume();
	}

	cout << "\nTotal volume = " << totalVol;
	
	system("pause");
	
	return 0;
}